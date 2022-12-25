/*
CONNECTION PIN LCD16X2 TO ATMEGA8A
D4 = |PB0|PD0|P0|
D5 = |PB1|PD1|P1|
D6 = |PB2|PD2|P2|
D7 = |PB3|PD3|P3|
RS = |PB4|PD4|P4|
RW = |PB5|PD5|P5|
EN = |PB6|PD6|P6|
*/
#include <avr/io.h>
#include <util/delay.h>
#include "lm016l.hpp"
#define F_CPU 8000000

int main(void)
{
	lm016l lcd = lm016l(lcdUsingPD);//lcd uses in PD
	lcd.location(0,0);// set location in lcd 16x2 x=0 , y=0
	lcd.print("ab");// input string
// 	lcd.print('c');// input char
// 	lcd.print(123);// input int
// 	lcd.print(-123);// input int
// 	lcd.print(123456);// input long
// 	lcd.print(12.3456,RANGE4);// input double with range 4 after comma
// 	lcd.print(CharToString('c'));// method to convert char to string
// 	lcd.print(IntegerToString(123));// method to convert Integer to string
// 	lcd.print(DoubleToString(12.3456,RANGE4));// method to convert double to string with range 4 after comma
}

