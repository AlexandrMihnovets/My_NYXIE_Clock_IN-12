/*
 * ports_ini.c
 *
 * Created: 10.01.2022 15:46:54
 *  Author: MikhnovetsA
 */ 

#include <avr/io.h>

void ports_ini(void)		//Ports initialization
{
	//Port B
	DDRB |= (1 << PB0);		//T6
	DDRB &= ~(1 << PB1);	//Button1
	DDRB &= ~(1 << PB2);	//Button2
	DDRB &= ~(1 << PB3);	//Button3
	DDRB &= ~(1 << PB4);	//not wsed (only MISO)
	DDRB &= ~(1 << PB5);	//T_Sens
	DDRB |= (1 << PB6);		//T1
	DDRB |= (1 << PB7);		//T2
	
	PORTB &= ~(1 << PB0);	//low
	PORTB &= ~(1 << PB1);	//low
	PORTB &= ~(1 << PB2);	//low
	PORTB &= ~(1 << PB3);	//low
	PORTB &= ~(1 << PB4);	//low
	PORTB &= ~(1 << PB5);	//low
	PORTB &= ~(1 << PB6);	//low
	PORTB &= ~(1 << PB7);	//low
	
	//************************************
	
	//Port C
	DDRC |= (1 << PC0);		//Address A
	DDRC |= (1 << PC1);		//Address D
	DDRC |= (1 << PC2);		//Address B
	DDRC |= (1 << PC3);		//Address C
	DDRC |= (1 << PC4);		//DOT1
	DDRC |= (1 << PC5);		//DOT2
	
	PORTC &= ~(1 << PC0);	//low
	PORTC &= ~(1 << PC1);	//low
	PORTC &= ~(1 << PC2);	//low
	PORTC &= ~(1 << PC3);	//low
	PORTC &= ~(1 << PC4);	//low
	PORTC &= ~(1 << PC5);	//low
	
	//************************************
	
	//Port D
	DDRD &= ~(1 << PD0);	//Rx
	DDRD |= (1 << PD1);		//Tx
	DDRD &= ~(1 << PD2);	//SQW
	DDRD &= ~(1 << PD3);	//not used
	DDRD |= (1 << PD4);		//LED
	DDRD |= (1 << PD5);		//T3
	DDRD |= (1 << PD6);		//T4
	DDRD |= (1 << PD7);		//T5
	
	DDRD &= ~(1 << PD0);	//low
	DDRD &= ~(1 << PD1);	//low
	PORTD &= ~(1 << PD2);	//low
	PORTD &= ~(1 << PD3);	//low
	PORTD &= ~(1 << PD4);	//low
	PORTD &= ~(1 << PD5);	//low
	PORTD &= ~(1 << PD6);	//low
	PORTD &= ~(1 << PD7);	//low
}