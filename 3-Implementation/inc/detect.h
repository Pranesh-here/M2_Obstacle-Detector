#ifndef __AVR_ATmega328P__
    #define __AVR_ATmega328P__
#endif
#ifndef __DETECT_H_
#define __DETECT_H_
#define F_CPU 1000000


#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdlib.h>

#define enable            5
#define registerselection 6

void send_command(unsigned char cmnd);
void send_character(unsigned char character);
void send_string(char *string_of_characters);

#endif