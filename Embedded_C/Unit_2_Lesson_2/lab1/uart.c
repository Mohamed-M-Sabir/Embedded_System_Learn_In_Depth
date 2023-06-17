#include "uart.h"

#define UART0DR *((volatile unsigned int*)0x101f1000)

void send_str_uart(unsigned char *ptr_str)
{
	
		while(*ptr_str!='\0')
		{
			UART0DR=(unsigned int)*ptr_str;
			ptr_str++;
			
		}
	
}