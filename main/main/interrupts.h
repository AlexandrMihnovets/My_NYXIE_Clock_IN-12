/*
 * interrupts.h
 *
 * Created: 13.01.2022 9:45:47
 *  Author: MikhnovetsA
 */ 


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_





#endif /* INTERRUPTS_H_ */

//Обработка прерывания по переполнению таймера 1 для динамической индикации (аноды включаются по очереди с 1 по 6)
ISR(TIMER2_OVF_vect)
{
	switch(anode)	//Следим за глобальной переменной anode для переключения анодов
	{
		case 1:	PORTB |=  (1 << PB6);
				PORTB &= ~(1 << PB7);
				PORTD &= ~(1 << PD5);
				PORTD &= ~(1 << PD6);
				PORTD &= ~(1 << PD7);
				PORTB &= ~(1 << PB0);
			break;
		case 2: PORTB &= ~(1 << PB6);
				PORTB |=  (1 << PB7);
				PORTD &= ~(1 << PD5);
				PORTD &= ~(1 << PD6);
				PORTD &= ~(1 << PD7);
				PORTB &= ~(1 << PB0);
			break;
		case 3: PORTB &= ~(1 << PB6);
				PORTB &= ~(1 << PB7);
				PORTD |=  (1 << PD5);
				PORTD &= ~(1 << PD6);
				PORTD &= ~(1 << PD7);
				PORTB &= ~(1 << PB0);
			break;
		case 4: PORTB &= ~(1 << PB6);
				PORTB &= ~(1 << PB7);
				PORTD &= ~(1 << PD5);
				PORTD |=  (1 << PD6);
				PORTD &= ~(1 << PD7);
				PORTB &= ~(1 << PB0);
			break;
		case 5: PORTB &= ~(1 << PB6);
				PORTB &= ~(1 << PB7);
				PORTD &= ~(1 << PD5);
				PORTD &= ~(1 << PD6);
				PORTD |=  (1 << PD7);
				PORTB &= ~(1 << PB0);
			break;
		case 6: PORTB &= ~(1 << PB6);
				PORTB &= ~(1 << PB7);
				PORTD &= ~(1 << PD5);
				PORTD &= ~(1 << PD6);
				PORTD &= ~(1 << PD7);
				PORTB |=  (1 << PB0);
			break;
	}
	anode++;
	if(anode > 6) anode = 1;
}