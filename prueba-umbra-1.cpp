#include <stdio.h>
#include "pico/stdlib.h"
#include "Servo.h"

#define BOTON 1
#define SERVO_PIN 2
#define DELAY 1000

int main()
{
    stdio_init_all();
    gpio_init(BOTON);
    gpio_set_dir(BOTON, GPIO_IN);
    Servo servo(SERVO_PIN);
    while (true){
        if (gpio_get(BOTON)){
            servo.goDegree(90.0);
            sleep_ms(DELAY);
            servo.goDegree(00.0);
            sleep_ms(DELAY);
        }
    }

}
