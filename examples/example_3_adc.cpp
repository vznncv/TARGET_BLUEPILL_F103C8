/**
 * BluePill ADC usage demo with internal temperature sensor.
 *
 * Note: absolute values of estimated temperature isn't precise (+- 10 C).
 * To get better result you need to measure exact values of `V_REF_INT` and `TEMP_SENS_V_REF` of concrete chip,
 * as this information isn't built in into STM32F1 series.
 */
#include "mbed.h"

DigitalOut user_led(LED1, 1);
static AnalogIn mcu_temp_in(ADC_TEMP);


//
// calibration constants
//
static float V_REF_INT = 1.20f;
static float TEMP_SENS_T_REF = 25;
static float TEMP_SENS_V_REF = 1.43f;
static float TEMP_SENS_AVG_SLOPE = 4.3f / 1000;
static float TEMP_SENS_AVG_SLOPE_INV = 1 / TEMP_SENS_AVG_SLOPE;

/**
 * Helper STM32F1 specific function to get approximate values of reference voltage.
 *
 * @return reference voltage (unit: V)
 */
float calculate_reference_voltage()
{
    static AnalogIn v_ref_internal(ADC_VREF);
    // note: stm32f1 doesn't have calibration values for VRefInt, so use typical values of VRefInt

    uint16_t v_ref_internal_raw = v_ref_internal.read_u16() >> 4;
    return V_REF_INT * 0xFFF / v_ref_internal_raw;
}


int main()
{
    float temp, temp_v;
    printf("====== Start ======\n");

    static float v_ref = calculate_reference_voltage();
    mcu_temp_in.set_reference_voltage(v_ref);
    printf("Reference voltage value: %.2f\n", v_ref);

    while (true) {
        // read and show current MCU temperature
        temp_v = mcu_temp_in.read_voltage();
        temp = (TEMP_SENS_V_REF - temp_v) * TEMP_SENS_AVG_SLOPE_INV + TEMP_SENS_T_REF;
        printf("MCU temperature:  %.1f C\n", temp);

        // delay and led blinking
        user_led = 0;
        ThisThread::sleep_for(50ms);
        user_led = 1;
        ThisThread::sleep_for(1550ms);
    }
}
