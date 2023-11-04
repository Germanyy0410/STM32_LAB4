/*
 * command_parser.c
 *
 *  Created on: Nov 4, 2023
 *      Author: ProX
 */

#include "command_parser.h"

void command_parser_fsm() {
	switch(parser_status) {
	case INIT_STRING:
		if (temp == '!') {
			parser_status = INPUT_STRING;
			command_index = 0;
		}

		break;

	case INPUT_STRING:
		if (temp == '#') {
			parser_status = INIT_STRING;
			command[command_index] = '\0';
			command_flag = 1;
		}
		else {
			if (temp == '!') {
				command_index = 0;
			}
			else {
				command[command_index++] = temp;

				if (command_index == MAX_BUFFER_SIZE) {
					command_index = 0;
				}
			}
		}

		break;
	default:
		break;
	}
}
