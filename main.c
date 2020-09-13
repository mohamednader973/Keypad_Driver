/*
 * Keypad_Driver.c
 *
 * Created: 9/13/2020 1:36:23 AM
 * Author : monad
 */ 

#include <avr/io.h>
#include "Keypad.h"
int main(void)
{
	Keypad_Init();
    /* Replace with your application code */
    while (1) 
    {
		Check_One();
		Check_Two();
		Check_Three();
		Check_Four();
    }
}

