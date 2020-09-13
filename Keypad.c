/*
 * Keypad.c
 *
 * Created: 9/13/2020 1:39:13 AM
 *  Author: monad
 */ 
#include "Keypad.h"
#include "DIO_INOUT.h"
void Keypad_Init(void)
{
	DIO_init(DIO_PORTD,PIN_ZERO,INPUT);
	DIO_init(DIO_PORTD,PIN_ONE,INPUT);
	DIO_init(DIO_PORTD,PIN_TWO,INPUT);
	DIO_init(DIO_PORTD,PIN_THREE,INPUT);
	DIO_init(DIO_PORTD,PIN_FOUR,OUTPUT);
	DIO_init(DIO_PORTD,PIN_FIVE,OUTPUT);
	DIO_init(DIO_PORTD,PIN_SIX,OUTPUT);
	DIO_init(DIO_PORTD,PIN_SEVEN,OUTPUT);
	DIO_init(DIO_PORTC,PIN_ZERO,OUTPUT);
	DIO_init_PORT(DIO_PORTA,OUTPUT);
}
void Check_One (void)
{
	Uint8 num;
	DIO_WRITE_DATA(DIO_PORTD,0b11101111);
	if (GetBit(PIND_IO,PIN_ZERO)==0)
	{
		while(GetBit(PIND_IO,PIN_ZERO)==0);
		num=7;
		DIO_WRITE_DATA(DIO_PORTA,num);
	}
	else if (GetBit(PIND_IO,PIN_ONE)==0)
	{
		while(GetBit(PIND_IO,PIN_ONE)==0);
		num=8;
		DIO_WRITE_DATA(DIO_PORTA,num);
	}
	else if (GetBit(PIND_IO,PIN_TWO)==0)
	{
		while(GetBit(PIND_IO,PIN_TWO)==0);
		num=9;
		DIO_WRITE_DATA(DIO_PORTA,num);
	}
	else if (GetBit(PIND_IO,PIN_THREE)==0)
	{
		while(GetBit(PIND_IO,PIN_THREE)==0);
		num='/';
	}
}
void Check_Two (void)
{
	Uint8 num;
	DIO_WRITE_DATA(DIO_PORTD,0b11011111);
	if (GetBit(PIND_IO,PIN_ZERO)==0)
	{
		while(GetBit(PIND_IO,PIN_ZERO)==0);
		num=4;
		DIO_WRITE_DATA(DIO_PORTA,num);
	}
	else if (GetBit(PIND_IO,PIN_ONE)==0)
	{
		while(GetBit(PIND_IO,PIN_ONE)==0);
		num=5;
		DIO_WRITE_DATA(DIO_PORTA,num);
	}
	else if (GetBit(PIND_IO,PIN_TWO)==0)
	{
		while(GetBit(PIND_IO,PIN_TWO)==0);
		num=6;
		DIO_WRITE_DATA(DIO_PORTA,num);
	}
	else if (GetBit(PIND_IO,PIN_THREE)==0)
	{
		while(GetBit(PIND_IO,PIN_THREE)==0);
		num='*';
	}
	
}
void Check_Three (void)
{
	Uint8 num;
	DIO_WRITE_DATA(DIO_PORTD,0b10111111);
	if (GetBit(PIND_IO,PIN_ZERO)==0)
	{
		while(GetBit(PIND_IO,PIN_ZERO)==0);
		num=1;
		DIO_WRITE_DATA(DIO_PORTA,num);
	}
	else if (GetBit(PIND_IO,PIN_ONE)==0)
	{
		while(GetBit(PIND_IO,PIN_ONE)==0);
		num=2;
		DIO_WRITE_DATA(DIO_PORTA,num);
	}
	else if (GetBit(PIND_IO,PIN_TWO)==0)
	{
		while(GetBit(PIND_IO,PIN_TWO)==0);
		num=3;
		DIO_WRITE_DATA(DIO_PORTA,num);
	}
	else if (GetBit(PIND_IO,PIN_THREE)==0)
	{
		while(GetBit(PIND_IO,PIN_THREE)==0);
		num='-';
	}
}
void Check_Four (void)
{
	Uint8 num;
	DIO_WRITE_DATA(DIO_PORTD,0b01111111);
	if (GetBit(PIND_IO,PIN_ZERO)==0)
	{
		while(GetBit(PIND_IO,PIN_ZERO)==0);
		num='o';
	}
	else if (GetBit(PIND_IO,PIN_ONE)==0)
	{
		while(GetBit(PIND_IO,PIN_ONE)==0);
		num=0;
		DIO_WRITE_DATA(DIO_PORTA,num);
	}
	else if (GetBit(PIND_IO,PIN_TWO)==0)
	{
		while(GetBit(PIND_IO,PIN_TWO)==0);
		num='=';
	}
	else if (GetBit(PIND_IO,PIN_THREE)==0)
	{
		while(GetBit(PIND_IO,PIN_THREE)==0);
		num='+';
	}
	
}