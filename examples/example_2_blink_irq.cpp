/**
 * Interrupt based led link demo.
 */
#include "mbed.h"

DigitalOut user_led(LED1, 1);
Ticker blink_ticker;

int blink_count = 0;

void blink()
{
    for (int i = 0; i < 8; i++) {
        user_led = !user_led;
        ThisThread::sleep_for(25ms);
    }
    blink_count++;
    printf("Blink count = %4i\n", blink_count);
}

auto blink_event = mbed_event_queue()->make_user_allocated_event(blink);

int main()
{
    blink_ticker.attach(callback(&blink_event, &decltype(blink_event)::call), 2000ms);

    printf("====== Start ======\n");
    while (true) {
        ThisThread::sleep_for(1s);
    }
}
