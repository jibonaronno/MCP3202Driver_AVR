/*
 * MCP3202soft.c
 *
 * Created: 12/13/2016 11:38:56 PM
 *  Author: Gabrial
 */ 

#include "MCP3202soft.h"

void MCP3202soft_GPIO_Init(void)
{
	sbi(MCP_DDR, MCP_DIN_PIN);
	cbi(MCP_DDR, MCP_DOUT_PIN);
	sbi(MCP_PORT, MCP_DOUT_PIN);
	
	sbi(MCP_DDR, MCP_SCK_PIN);
}
