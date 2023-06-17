#include "uart.h"

unsigned char str[100]="Learn-In-Depth:Mohamed M.Saber";

void main(void)
{
	
	send_str_uart(str);
}