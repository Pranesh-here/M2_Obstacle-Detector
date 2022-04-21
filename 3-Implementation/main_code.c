#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <detect.h>

static volatile int pulse = 0;
static volatile int a = 0;

int main(void)
{

    DDRC = 0xFF;
    DDRB = 0xFF;
    DDRD = 0b11111011;
    _delay_ms(50);
    
    //GICR|=(1<<INT0);
    MCUCR|=(1<<ISC00);
    
    TCCR1A = 0;
    
    int16_t COUNTA = 0;
    char DISPLAYA [16];
    

    send_command(0x01); //Clear Screen 0x01 = 00000001
    _delay_ms(50);
    send_command(0x38);
    _delay_ms(50);
    send_command(0b00001111);
    _delay_ms(50);
    
    sei();
    
    while(1)
    {
        PORTD|=(1<<PIND3);
        _delay_us(15);
        PORTD &=~(1<<PIND0);
        
        COUNTA = pulse/58;
        send_string ("CIRCUIT DIGEST");
        send_command(0x80 + 0x40 + 0);
        send_string ("DISTANCE:");
        itoa(COUNTA,DISPLAYA,10);
        send_string(DISPLAYA);
        send_string ("Cm    ");
        send_command(0x80 + 0);

    }
}

ISR(INT0_vect)
{
    if (a==1)
    {
        TCCR1B=0;
        pulse=TCNT1;
        TCNT1=0;
        a=0;
    }
    if (a==0)
    {
        TCCR1B|=(1<<CS10);
        a=1;
    }
}