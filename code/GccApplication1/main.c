#include <avr/io.h>

#include <util/delay.h>
unsigned char i=0;
int main()
 {
	 DDRB=0xFF;
	 DDRC=0x00;
	 PORTB=0x00;
	 while(1)
	 {
		 if ((PINC & (1<<0))==0)
		 { 
			 i++;
			 while ((PINC & (1<<0))==0);
		 }
		 if ((PINC & (1<<1))==0)
		 {
			 PORTB=(((i/10)<<4)|(i%10));
	 while ((PINC & (1<<1))==0);
	 i=0;
	 }
	 	 }
	 return 0;
 }
	
