/* Copyright 2020 Victor Lucachi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// place overrides here

#define USE_SERIAL
// #define MASTER_LEFT
#define SPLIT_USB_DETECT

// #define LAYER_STATE_8BIT // No effect

#define VIAL_KEYBOARD_UID {0x21, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0}
#define DYNAMIC_KEYMAP_LAYER_COUNT 4 // Changing to 2 no effect to firmware size
#define VIAL_TAP_DANCE_ENTRIES 16

#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 5 }