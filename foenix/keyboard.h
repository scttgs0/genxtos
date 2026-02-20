#pragma once

#include <stdint.h>
#include "a2560_struct.h"


void a2560_kbd_init(const uint32_t *counter, uint16_t counter_freq);

/* They return the previous handler so you can daisy chain them */
#ifndef MACHINE_A2560K
scancode_handler_t a2560_ps2_set_key_up_handler(scancode_handler_t);
scancode_handler_t a2560_ps2_set_key_down_handler(scancode_handler_t);
#endif
mouse_packet_handler_t a2560_ps2_set_mouse_handler(mouse_packet_handler_t);
