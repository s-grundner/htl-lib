/*
 * ringbuffer.c
 *
 * Created: 4/23/2022 6:57:06 PM
 * Author : Smon
 */ 

#include <avr/common.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <inttypes.h>
#include "ringbuffer.h"
#include "stdhtl.h"

int main(void)
{
	sei();
	init_ringbuffer();
	unsigned char *a = "HOFLPOFL";
	send_serial_data(a, 8);
	while (1)
}

