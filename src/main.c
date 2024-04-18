#define CH32V003 1
#define SYSTEM_CORE_CLOCK 48000000
#define FUNCONF_SYSTEM_CORE_CLOCK SYSTEM_CORE_CLOCK
#define APB_CLOCK SYSTEM_CORE_CLOCK
#define FUNCONF_USE_UARTPRINTF

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "ch32v00x.h"

void HardFault_Handler(void) __attribute__((interrupt));
void HardFault_Handler(void)
{
	volatile uint32_t mcause = __get_MCAUSE();
	volatile uint32_t mepc = __get_MEPC();
	while (1)
	{
	}
}

void NMI_Handler(void) __attribute__((interrupt));
void NMI_Handler(void)
{
	while (1)
	{
	}
}

const char *errstr[] =
{
	"not busy",
	"master mode",
	"transmit mode",
	"tx empty",
	"transmit complete",
};


int main(void)
{
	// Init the top-level 48MHz HSI clock
	SystemInit48HSI();

	SetupUART(UART_BRR);

	printf("i2c_error - timeout waiting for %s\n", errstr[0]);

	while (1)
	{
	}
}