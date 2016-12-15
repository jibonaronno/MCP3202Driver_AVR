/*
 * MCP3202soft.c
 *
 * Created: 12/13/2016 11:38:56 PM
 *  Author: Gabrial
 */ 

#include <avr/io.h>
#include "global.h"
#include "MCP3202soft.h"

void MCP3202soft_GPIO_Init(void)
{
	sbi(MCP_DDR, MCP_DIN_PIN);
	cbi(MCP_DDR, MCP_DOUT_PIN);
	sbi(MCP_PORT, MCP_DOUT_PIN);
	
	sbi(MCP_DDR, MCP_SCK_PIN);
	sbi(MCP_DDR, MCP_CS_PIN);
}

void write_pin(volatile uint8_t *port, uint8_t pin_no, uint8_t pin_value)
{
	if (pin_value)
	{
		sbi(port, pin_no);
	}
	else
	{
		cbi(port, pin_no);
	}
}

uint8_t read_pin(volatile uint8_t *pin, uint8_t pin_no)
{
	
}

uint16_t MCP_Read(void)
{
	
	return 0;
}
