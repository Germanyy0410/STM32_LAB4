/*
 * global.h
 *
 *  Created on: Nov 4, 2023
 *      Author: ProX
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include <stdio.h>
#include <string.h>
#include "software_timer.h"
#include "main.h"
#include "command_parser.h"
#include "uart_communication.h"

// Status command_parser
#define INIT_STRING 0
#define INPUT_STRING 1

// Status uart_communication
#define WAIT_RST 		6
#define SEND_ADC		7
#define WAIT_OK 		8
#define MAX_BUFFER_SIZE 30

extern int parser_status;
extern int uart_status;

// Variables to read data
extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

// Variables to read command
extern uint8_t command_flag;
extern uint8_t command[MAX_BUFFER_SIZE];
extern uint8_t command_index;

// String to display console
extern char str[50];
// ADC Value
extern uint32_t ADC_value;

#endif /* INC_GLOBAL_H_ */
