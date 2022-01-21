/*
 * Created: 10.01.2022 15:29:55
 * Author: MikhnovetsA
 * ��������� ��� ����� �� ������������� ����������� ��-12 � �� ATmega8(88) �� ����� ��
 */ 
#define F_CPU 8000000UL

#include "all_include.h"

int main(void)
{
	ports_ini();	//��������� ������
	
	//timers_ini(1024);	//Timers initialisation
	
	//sei();			//Interrupts enable
	
    while(1)
    {
		for(uint8_t i = 0; i <= 10; i++)
		{
			decoder(i);
			
			anode_switching();
			
			_delay_ms(100);
		}
	}
}