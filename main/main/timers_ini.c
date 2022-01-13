/*
 * timers_ini.c
 *
 * Created: 10.01.2022 16:28:58
 *  Author: MikhnovetsA
 */ 

#include <avr/io.h>

void timers_ini(void)
{
	//Prescaller Timer1
	/*
		/		CS12	CS11	CS10
		1		0		0		1
		8		0		1		0
		64		0		1		1
		256		1		0		0
		1024	1		0		1
	*/
	TCCR1B |= (1 << CS10);
	//TCCR1B |= (1 << CS11);
	TCCR1B |= (1 << CS12);
	
	//Reset Timer1 register
	TCNT1 = 0;
	
	//Interrupts for Timer1
	TIMSK |= TOIE1;		//Overflow interrupt enable
}