/*
 * functions.h
 *
 * Created: 13.01.2022 15:30:47
 *  Author: MikhnovetsA
 */ 


#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_





#endif /* FUNCTIONS_H_ */

void decoder(uint8_t a)		//Функция управления дешифратором
{
	PORTC &= ~((1 << PB3) | (1 << PB2) | (1 << PB1) | (1 << PB0));	//Обнуляем, чтобы мусор не копился
	switch(a)
	{
		case 0: PORTC |= numbers[0];
			break;
		case 1: PORTC |= numbers[1];
			break;
		case 2: PORTC |= numbers[2];
			break;
		case 3: PORTC |= numbers[3];
			break;
		case 4: PORTC |= numbers[4];
			break;
		case 5: PORTC |= numbers[5];
			break;
		case 6: PORTC |= numbers[6];
			break;
		case 7: PORTC |= numbers[7];
			break;
		case 8: PORTC |= numbers[8];
			break;
		case 9: PORTC |= numbers[9];
			break;
		case 10: PORTC |= numbers[10];
			break;
	}
}
/*
void decoder2(uint8_t a)
{
	switch(a)
	{
		case 1: PORTC &= ~((1 << PB3) | (1 << PB2) | (1 << PB1)); PORTC |= (1 <<  PB0);	//1
			break;
		case 2: PORTC &= ~((1 << PB3) | (1 << PB1) | (1 << PB0)); PORTC |= (1 << PB2);	//2
			break;
		case 3: PORTC &= ~((1 << PB3) | (1 << PB1)); PORTC |= (1 << PB2) | (1 << PB0);	//3
			break;
		case 4: PORTC &= ~((1 << PB2) | (1 << PB1) | (1 << PB0)); PORTC |= (1 << PB3);	//4
			break;
		case 5: PORTC &= ~((1 << PB2) | (1 << PB1)); PORTC |= (1 << PB3) | (1 << PB0);	//5
			break;
		case 6: PORTC &= ~((1 << PB0) | (1 << PB1)); PORTC |= (1 << PB3) | (1 << PB2);	//6
			break;
		case 7: PORTC &= ~((1 << PB1)); PORTC |= (1 << PB3) | (1 << PB2) | (1 << PB0);	//7
			break;
		case 8: PORTC &= ~((1 << PB3) | (1 << PB2) | (1 << PB0)); PORTC |= (1 <<  PB1);	//8
			break;
		case 9: PORTC &= ~((1 << PB3) | (1 << PB2)); PORTC |= (1 << PB1) | (1 << PB0);	//9
			break;
		case 0: PORTC &= ~((1 << PB3) | (1 << PB2) | (1 << PB1) | (1 << PB0));			//0
			break;
	}
}
*/

void anode_switching(void)		//Функция переключения ламп
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

void get_number(uint8_t number)
{
	
}

uint8_t display(uint8_t number)
{
	return 0;
}