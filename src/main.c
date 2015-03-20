#include "osapi.h"          // required by uart
#include "driver/uart.h"    // uart_init()
#include "user_interface.h" // system_print_meminfo();

void user_init()
{
	uart_init(0, 115200);
	uart_init_io();

	ets_uart_printf("\n\n\nBare Minimum ESP8266 Firmware\n");
	ets_uart_printf("Powered by Antares " CONFIG_VERSION_STRING "\n");	
	ets_uart_printf("(c) Andrew McDonnell (@pastcompute) 2015 <bugs@andrewmcdonnell.net>\n");	
	ets_uart_printf("Antares is (c) Andrew 'Necromant' Andrianov 2014 <andrew@ncrmnt.org>\n");	
	ets_uart_printf("This is free software (where possible), published under the terms of GPLv2\n\n");	
	system_print_meminfo();
}
