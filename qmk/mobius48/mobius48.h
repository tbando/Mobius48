/*
Copyright 2021 Salicylic_Acid

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

#include "quantum.h"

#define LAYOUT( \
    L10, L11, L02, L03, L04, L05, R00, R01, R02, R03, R14, R15, \
    L20, L21, L12, L13, L14, L15, R10, R11, R12, R13, R24, R25, \
    L30, L31, L22, L22, L24, L25, R20, R21, R22, R23, R34, R35, \
    L40, L41, L42, L43, L44, L45, R40, R41, R42, R43, R44, R45  \
  ) \
  { \
    { KC_NO, KC_NO, L02,   L03,   L04,   L05   }, \
    { L10,   L11,   L12,   L13,   L14,   L15   }, \
    { L20,   L21,   L22,   L23,   L24,   L25   }, \
    { L30,   L31,   KC_NO, KC_NO, KC_NO, KC_NO }, \
    { L40,   L41,   L42,   L43,   L44,   L45   }, \
    { R00,   R01,   R02,   R03,   KC_NO, KC_NO,}, \
    { R10,   R11,   R12,   R13,   R14,   R15   }, \
    { R20,   R21,   R22,   R23,   R24,   R25   }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, R34,   R35   }, \
    { R40,   R41,   R42,   R43,   R44,   R45   }  \
  }
