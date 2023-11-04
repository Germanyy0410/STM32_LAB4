/*
 * global.c
 *
 *  Created on: Nov 4, 2023
 *      Author: ProX
 */

#include "global.h"

int parser_status = INIT_STRING;
int uart_status = WAIT_RST;

uint8_t temp = 0;
uint8_t buffer[MAX_BUFFER_SIZE];
uint8_t index_buffer = 0;
uint8_t buffer_flag = 0;

uint8_t command[MAX_BUFFER_SIZE];
uint8_t command_index = 0;
uint8_t command_flag = 0;

char str[50];

uint32_t ADC_value = 0;

