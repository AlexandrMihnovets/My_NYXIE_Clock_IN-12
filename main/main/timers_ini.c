/*
 * timers_ini.c
 *
 * Created: 10.01.2022 16:28:58
 *  Author: MikhnovetsA
 */ 

#include <avr/io.h>

void timers_ini(uint16_t prescaler)
{
	//Prescaller Timer2
	/*
		/		CS22	CS21	CS20
		1		0		0		1
		8		0		1		0
		32		0		1		1
		64		1		0		0
		128		1		0		1
		256		1		1		0
		1024	1		1		1
	*/
	
	switch(prescaler)
	{
		case 1:		TCCR2 |= (1 << CS20);
					TCCR2 &= ~(1 << CS21);
					TCCR2 &= ~(1 << CS22);
			break;
		case 8:		TCCR2 &= ~(1 << CS20);
					TCCR2 |= (1 << CS21);
					TCCR2 &= ~(1 << CS22);
			break;
		case 32:	TCCR2 &= ~(1 << CS20);
					TCCR2 |= (1 << CS21);
					TCCR2 |= (1 << CS22);
			break;
		case 64:	TCCR2 &= ~(1 << CS20);
					TCCR2 &= ~(1 << CS21);
					TCCR2 |= (1 << CS22);
			break;
		case 128:	TCCR2 |= (1 << CS20);
					TCCR2 &= ~(1 << CS21);
					TCCR2 |= (1 << CS22);
			break;
		case 256:	TCCR2 &= ~(1 << CS20);
					TCCR2 |= (1 << CS21);
					TCCR2 |= (1 << CS22);
			break;
		case 1024:	TCCR2 |= (1 << CS20);
					TCCR2 |= (1 << CS21);
					TCCR2 |= (1 << CS22);
			break;
		default:	TCCR2 |= (1 << CS20);	//По умолчанию \1024
					TCCR2 |= (1 << CS21);
					TCCR2 |= (1 << CS22);
	}
	
	
	//Reset Timer2 register
	TCNT2 = 0;
	
	//Interrupts for Timer1
	TIMSK |= TOIE2;		//Overflow interrupt enable
}