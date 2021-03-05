/*
Copyright 2019 Ryan Caltabiano <https://github.com/XScorpion2>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#include <stdint.h>
#include <stdbool.h>

#ifndef TOUCH_TERM
#    define TOUCH_TERM 250
#endif

#ifndef TOUCH_SEGMENTS
#    define TOUCH_SEGMENTS 3
#endif

#ifndef TOUCH_DEADZONE
#    define TOUCH_DEADZONE 25
#endif

#ifndef ENCODER_RESOLUTION
#    define ENCODER_RESOLUTION 10
#endif

void touch_encoder_init(void);
void touch_encoder_update(void);
uint8_t touch_encoder_status(void);
uint8_t touch_encoder_position(void);
uint16_t touch_encoder_keys(void);
void touch_encoder_calibrate(void);

// Called when touch encoder is tapped, weak function overridable by the user
void touch_encoder_tapped_user(uint8_t index, uint8_t section);

// Called when touch encoder is slid, weak function overridable by the user
void touch_encoder_update_user(uint8_t index, bool clockwise);

// Called when touch encoder is slid, weak function overridable by the user
void touch_encoder_update_user_raw(uint8_t index);
