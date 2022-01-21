/*
 * vars.h
 *
 * Created: 10.01.2022 16:16:42
 *  Author: MikhnovetsA
 */ 


#ifndef VARS_H_
#define VARS_H_





#endif /* VARS_H_ */

//������ ��� ����������� �� 0 �� 10 (��� ������� ���������� 10 �� ���� ��������� ��������� �� �����, ��� ��� �� ����� ����� �����)
//Pins C B D A
uint8_t numbers[11] = {
	0b00000000,	//0
	0b00000001,	//1
	0b00000100,	//2
	0b00000101,	//3
	0b00001000,	//4
	0b00001001,	//5
	0b00001100,	//6
	0b00001101,	//7
	0b00000010,	//8
	0b00000011,	//9
	0b00001111,	//nothing
};

uint8_t anode = 1;		//for anodes change

uint8_t hours_high   = 0;
uint8_t hours_low    = 0;
uint8_t minutes_high = 0;
uint8_t minutes_low  = 0;
uint8_t seconds_high = 0;
uint8_t seconds_low  = 0;