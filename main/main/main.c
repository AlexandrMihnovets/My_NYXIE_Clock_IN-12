/*
 * main.c
 *
 * Created: 10.01.2022 15:29:55
 * Author: MikhnovetsA
 * Программа для часов на газоразрядных индикаторах ИН-12 и МК ATmega8(88) на языке Си
 *
 */ 


#include <avr/io.h>
#include "vars.h"
#include "ports_ini.h"

int main(void)
{
	ports_ini();	//Настройка портов
	
	
    while(1)
    {
        
    }
}