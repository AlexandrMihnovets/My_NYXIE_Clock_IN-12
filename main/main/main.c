/*
 * main.c
 *
 * Created: 10.01.2022 15:29:55
 * Author: MikhnovetsA
 * ��������� ��� ����� �� ������������� ����������� ��-12 � �� ATmega8(88) �� ����� ��
 *
 */ 


#include <avr/io.h>
#include <avr/interrupt.h>
#include "vars.h"
#include "ports_ini.h"
#include "timers_ini.h"

int main(void)
{
	ports_ini();	//��������� ������
	
	timers_ini(1024);	//Timers initialisation
	
	sei();			//Interrupts enable
	
    while(1)
    {
        
    }
}