#include<detect.h>
void send_command(unsigned char cmnd)
{
    PORTB = cmnd;
    PORTD &= ~ (1<<registerselection);
    PORTD |= 1<<enable;
    _delay_ms(8);
    PORTD &= ~1<<enable;
    PORTB = 0;
}

void send_character(unsigned char character)
{
    PORTB = character;
    PORTD |= 1<<registerselection;
    PORTD |= 1<<enable;
    _delay_ms(8);
    PORTD &= ~1<<enable;
    PORTB = 0;
}
void send_string(char *string_of_characters)
{
    while(*string_of_characters > 0)
    {
        send_character(*string_of_characters++);
    }
}