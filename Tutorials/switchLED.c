//tutorial from humanHardDrive

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <avr/delay.h>

int main(void){
    DDRB = 0x01;
    PORTB = 0x02;
    while(1){
        if(!(PINB & 0x02)){
            PORTB |= 0x01;
        }else{
            PORTB &=0xFE;
        }
    }
}
