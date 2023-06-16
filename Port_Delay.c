//tutorial from humanHardDrive

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <avr/delay.h>

int main(void){
    DDRB = 0x01;
    PORTB = 0;
    while(1){
        PORTB= 0b00000001;
        _delay_ms(500);
        PORTB = 0b00000000;
        _delay_ms(500);
    }
}
