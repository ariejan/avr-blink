/* Blink LED on ATTiny85 Port B, Pin 3 (PDIP-8: Pin 2) */
 
/* ATTiny85 defaults to an 8MHz clock and an CKDIV8 to divide
 * that by 8 internally, effectively making the AVR run at 1 MHz */
#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h> 

int main (void){
    /* set PORTB PIN3 as output*/
    DDRB = (1<<DDB3);

    while (1){
        /* set PORTB PIN 3 high */
        PORTB |= (1<<PB3);
        _delay_ms(100);

        /* set PORTB PIN3 low */
        PORTB &= ~(1<<PB3);
        _delay_ms(900);
    }

    // LOL
    return 42;
}
