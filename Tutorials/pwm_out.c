#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

double dutyCylce = 0;

int main(void){

    DDRD = (1 << PORTD6);

    TCCR0A = (1 << CM0A1) | (1 << WGM00) | (1 << WGM01);
    TIMSK0 = ( 1 << TOIE0);

    OCR0A = (dutyCyle/100)*255;

    sei();

    TCCROB = (1 << CS00) | (1 << CS02);

    while(1){
        _delay_ms(100);

        dutyCycle += 10;

        if(dutyCycle > 100){
            dutyCycle = 0;
        }
    }

}

ISR(TIMER0_COMPA_vect){
} 