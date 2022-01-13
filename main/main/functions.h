/*
 * functions.h
 *
 * Created: 13.01.2022 15:30:47
 *  Author: MikhnovetsA
 */ 


#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_





#endif /* FUNCTIONS_H_ */

void decoder(void)
{
	switch(anode)
	{
		case 1: PORTC |= (1 << numbers[0]);
		break;
		case 2: PORTC |= (1 << numbers[1]);;
		break;
		case 3: PORTC |= (1 << numbers[2]);;
		break;
		case 4: PORTC |= (1 << numbers[3]);;
		break;
		case 5: PORTC |= (1 << numbers[4]);;
		break;
		case 6: PORTC |= (1 << numbers[5]);;
		break;
	}
	PORTC &= (~(1 << PB3) | (1 << PB2) | (1 << PB1) | (1 << PB0));	//Обнуляем, чтобы мусор не копился
}