/*
 * glcd11x14.cpp
 *
 *  Created on: 7 Feb 2018
 *      Author: David
 */

#include "lcd7920.h"

#if SUPPORT_12864_LCD

//Font Generated by MikroElektronika GLCD Font Creator 1.2.0.0
//MikroElektronika 2011
//http://www.mikroe.com

//GLCD FontName : Liberation_Sans11x14 (originally 9pt)
//GLCD FontSize : 11 x 14

const uint8_t Liberation_Sans11x14[] =
{
        0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char
        0x01, 0xFC, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char !
        0x03, 0x0C, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char "
        0x07, 0x10, 0x01, 0x90, 0x07, 0x7C, 0x01, 0x10, 0x01, 0xD0, 0x03, 0x3C, 0x01, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char #
        0x07, 0x00, 0x02, 0x3C, 0x06, 0x64, 0x04, 0xFE, 0x0F, 0x44, 0x04, 0xCC, 0x06, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char $
        0x0B, 0x38, 0x00, 0x44, 0x00, 0x44, 0x00, 0x38, 0x06, 0x80, 0x01, 0x40, 0x00, 0x30, 0x00, 0x8C, 0x03, 0x40, 0x04, 0x40, 0x04, 0x80, 0x03,  // Code for char %
        0x08, 0x00, 0x01, 0xC0, 0x06, 0x7C, 0x04, 0xE4, 0x04, 0x24, 0x05, 0x18, 0x03, 0xC0, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char &
        0x01, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char '
        0x02, 0xF0, 0x07, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char (
        0x02, 0x0C, 0x18, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char )
        0x05, 0x08, 0x00, 0x28, 0x00, 0x1C, 0x00, 0x28, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char *
        0x05, 0x40, 0x00, 0x40, 0x00, 0xF0, 0x01, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char +
        0x01, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ,
        0x02, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char -
        0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char .
        0x03, 0x00, 0x06, 0xF0, 0x01, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char /
        0x05, 0xF8, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 0
        0x05, 0x08, 0x04, 0x04, 0x04, 0xFC, 0x07, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 1
        0x05, 0x08, 0x06, 0x04, 0x05, 0x84, 0x04, 0x44, 0x04, 0x38, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 2
        0x05, 0x08, 0x02, 0x04, 0x04, 0x44, 0x04, 0x44, 0x04, 0xB8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 3
        0x06, 0xC0, 0x01, 0x60, 0x01, 0x30, 0x01, 0x18, 0x01, 0xFC, 0x07, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 4
        0x05, 0x7C, 0x02, 0x24, 0x04, 0x24, 0x04, 0x24, 0x04, 0xC4, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 5
        0x05, 0xF8, 0x03, 0x24, 0x04, 0x24, 0x04, 0x24, 0x04, 0xC8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 6
        0x05, 0x04, 0x00, 0x04, 0x06, 0xC4, 0x01, 0x34, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 7
        0x05, 0xB8, 0x03, 0x44, 0x04, 0x44, 0x04, 0x44, 0x04, 0xB8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 8
        0x05, 0x78, 0x02, 0x84, 0x04, 0x84, 0x04, 0x84, 0x04, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 9
        0x02, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char :
        0x02, 0x00, 0x10, 0x10, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ;
        0x05, 0x40, 0x00, 0xA0, 0x00, 0xA0, 0x00, 0xA0, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char <
        0x05, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char =
        0x05, 0x10, 0x01, 0xA0, 0x00, 0xA0, 0x00, 0xA0, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char >
        0x05, 0x08, 0x00, 0x04, 0x00, 0x84, 0x05, 0xC4, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ?
        0x0A, 0xE0, 0x07, 0x10, 0x08, 0xC8, 0x11, 0x24, 0x12, 0x14, 0x12, 0x14, 0x11, 0xE4, 0x13, 0x34, 0x0A, 0x08, 0x03, 0xF0, 0x01, 0x00, 0x00,  // Code for char @
        0x07, 0x00, 0x06, 0xC0, 0x03, 0xB8, 0x00, 0x84, 0x00, 0xB8, 0x00, 0xC0, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char A
        0x06, 0xFC, 0x07, 0x44, 0x04, 0x44, 0x04, 0x44, 0x04, 0x6C, 0x04, 0xB8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char B
        0x07, 0xF0, 0x01, 0x08, 0x02, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char C
        0x07, 0xFC, 0x07, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0x02, 0xF0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char D
        0x06, 0xFC, 0x07, 0x44, 0x04, 0x44, 0x04, 0x44, 0x04, 0x44, 0x04, 0x44, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char E
        0x06, 0xFC, 0x07, 0x44, 0x00, 0x44, 0x00, 0x44, 0x00, 0x44, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char F
        0x07, 0xF8, 0x03, 0x0C, 0x06, 0x04, 0x04, 0x04, 0x04, 0x44, 0x04, 0x4C, 0x06, 0xC8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char G
        0x07, 0xFC, 0x07, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0xFC, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char H
        0x01, 0xFC, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char I
        0x05, 0x00, 0x02, 0x00, 0x06, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char J
        0x06, 0xFC, 0x07, 0x40, 0x00, 0x60, 0x00, 0x90, 0x00, 0x08, 0x03, 0x04, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char K
        0x06, 0xFC, 0x07, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char L
        0x07, 0xFC, 0x07, 0x18, 0x00, 0x30, 0x00, 0x60, 0x00, 0x30, 0x00, 0x18, 0x00, 0xFC, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char M
        0x07, 0xFC, 0x07, 0x0C, 0x00, 0x30, 0x00, 0x40, 0x00, 0x80, 0x01, 0x00, 0x06, 0xFC, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char N
        0x07, 0xF8, 0x03, 0x0C, 0x06, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0C, 0x06, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char O
        0x06, 0xFC, 0x07, 0x84, 0x00, 0x84, 0x00, 0x84, 0x00, 0x84, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char P
        0x07, 0xF8, 0x03, 0x0C, 0x06, 0x04, 0x04, 0x04, 0x0C, 0x04, 0x1C, 0x0C, 0x16, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Q
        0x07, 0xFC, 0x07, 0x44, 0x00, 0x44, 0x00, 0x44, 0x00, 0xC4, 0x00, 0x44, 0x03, 0x38, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char R
        0x06, 0x38, 0x02, 0x24, 0x04, 0x24, 0x04, 0x44, 0x04, 0x44, 0x04, 0xC8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char S
        0x07, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0xFC, 0x07, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char T
        0x07, 0xFC, 0x03, 0x00, 0x06, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x06, 0xFC, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char U
        0x07, 0x04, 0x00, 0x78, 0x00, 0xC0, 0x03, 0x00, 0x04, 0xC0, 0x03, 0x78, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char V
        0x0B, 0x0C, 0x00, 0xF8, 0x00, 0x80, 0x07, 0x00, 0x07, 0xC0, 0x01, 0x70, 0x00, 0xC0, 0x01, 0x00, 0x07, 0x80, 0x07, 0xF8, 0x00, 0x0C, 0x00,  // Code for char W
        0x05, 0x0C, 0x06, 0x90, 0x01, 0x60, 0x00, 0xB0, 0x01, 0x0C, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char X
        0x05, 0x0C, 0x00, 0x30, 0x00, 0xC0, 0x07, 0x30, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Y
        0x06, 0x04, 0x07, 0x84, 0x05, 0xC4, 0x04, 0x64, 0x04, 0x34, 0x04, 0x1C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Z
        0x02, 0xFC, 0x1F, 0x04, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char [
        0x03, 0x0C, 0x00, 0xF0, 0x01, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char BackSlash
        0x02, 0x04, 0x10, 0xFC, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ]
        0x05, 0x20, 0x00, 0x18, 0x00, 0x04, 0x00, 0x18, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ^
        0x07, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char _
        0x02, 0x02, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char `
        0x06, 0x20, 0x07, 0x90, 0x04, 0x90, 0x04, 0x90, 0x02, 0xE0, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char a
        0x05, 0xFC, 0x07, 0x10, 0x04, 0x10, 0x04, 0x10, 0x04, 0xE0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char b
        0x05, 0xE0, 0x03, 0x10, 0x04, 0x10, 0x04, 0x10, 0x04, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char c
        0x05, 0xE0, 0x03, 0x10, 0x04, 0x10, 0x04, 0x10, 0x04, 0xFC, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char d
        0x05, 0xE0, 0x03, 0x90, 0x04, 0x90, 0x04, 0x90, 0x04, 0xE0, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char e
        0x03, 0x10, 0x00, 0xFC, 0x07, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char f
        0x05, 0xE0, 0x13, 0x10, 0x14, 0x10, 0x14, 0x30, 0x12, 0xE0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char g
        0x05, 0xFC, 0x07, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char h
        0x01, 0xF4, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char i
        0x02, 0x00, 0x10, 0xF4, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char j
        0x05, 0xFC, 0x07, 0x80, 0x00, 0xE0, 0x01, 0x30, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char k
        0x01, 0xFC, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char l
        0x09, 0xE0, 0x07, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0xF0, 0x07, 0x20, 0x00, 0x10, 0x00, 0x10, 0x00, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x00,  // Code for char m
        0x05, 0xF0, 0x07, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char n
        0x05, 0xE0, 0x03, 0x10, 0x04, 0x10, 0x04, 0x10, 0x04, 0xE0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char o
        0x05, 0xF0, 0x1F, 0x10, 0x04, 0x10, 0x04, 0x10, 0x04, 0xE0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char p
        0x05, 0xE0, 0x03, 0x10, 0x04, 0x10, 0x04, 0x10, 0x04, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char q
        0x03, 0xE0, 0x07, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char r
        0x05, 0x60, 0x02, 0x90, 0x04, 0x90, 0x04, 0x90, 0x04, 0x20, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char s
        0x03, 0x10, 0x00, 0xFC, 0x07, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char t
        0x05, 0xF0, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char u
        0x05, 0x30, 0x00, 0xC0, 0x03, 0x00, 0x04, 0xC0, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char v
        0x07, 0xF0, 0x03, 0x00, 0x04, 0x00, 0x03, 0x80, 0x00, 0x00, 0x03, 0x00, 0x04, 0xF0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char w
        0x05, 0x10, 0x04, 0x60, 0x03, 0x80, 0x00, 0x60, 0x03, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char x
        0x05, 0x30, 0x10, 0xC0, 0x11, 0x00, 0x0E, 0xC0, 0x01, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char y
        0x04, 0x10, 0x04, 0x10, 0x07, 0xD0, 0x04, 0x30, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char z
        0x04, 0x80, 0x00, 0x78, 0x0F, 0x0C, 0x18, 0x04, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char {
        0x02, 0x00, 0x00, 0xFC, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char |
        0x04, 0x04, 0x10, 0x0C, 0x18, 0x78, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char }
        0x05, 0x20, 0x00, 0x20, 0x00, 0x60, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ~
        0x03, 0xF8, 0x07, 0x08, 0x04, 0xF8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char €
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ‚
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ƒ
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char „
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char …
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char †
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ‡
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ˆ
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ‰
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Š
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ‹
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Œ
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ž
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ‘
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ’
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char “
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ”
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char •
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char –
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char —
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ˜
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ™
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char š
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ›
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char œ
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ž
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ÿ
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char  
        0x01, 0xD0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ¡
        0x05, 0xF0, 0x01, 0x08, 0x02, 0x0C, 0x06, 0x08, 0x02, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ¢
        0x07, 0x40, 0x04, 0xF0, 0x07, 0xFC, 0x04, 0x44, 0x04, 0x44, 0x04, 0x0C, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char £
        0x05, 0xF0, 0x01, 0x10, 0x01, 0x10, 0x01, 0x10, 0x01, 0xF0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ¤
        0x07, 0x04, 0x00, 0x48, 0x01, 0x70, 0x01, 0xC0, 0x07, 0x70, 0x01, 0x48, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ¥
        0x01, 0x7C, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ¦
        0x05, 0xD8, 0x0C, 0x34, 0x09, 0x24, 0x09, 0x24, 0x09, 0xE8, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char §
        0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ¨
        0x09, 0xE0, 0x00, 0x18, 0x03, 0xE8, 0x02, 0x14, 0x05, 0x14, 0x05, 0x14, 0x05, 0x08, 0x02, 0x18, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ©
        0x04, 0x70, 0x00, 0x54, 0x00, 0x54, 0x00, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ª
        0x05, 0xC0, 0x01, 0x20, 0x02, 0x80, 0x00, 0x40, 0x01, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char «
        0x05, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ¬
        0x02, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ­
        0x09, 0xE0, 0x00, 0x18, 0x03, 0x08, 0x02, 0xF4, 0x05, 0x54, 0x04, 0xF4, 0x05, 0x08, 0x02, 0x18, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ®
        0x07, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ¯
        0x03, 0x1C, 0x00, 0x14, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char °
        0x07, 0x40, 0x04, 0x40, 0x04, 0x40, 0x04, 0xF0, 0x05, 0x40, 0x04, 0x40, 0x04, 0x40, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ±
        0x04, 0x40, 0x00, 0x64, 0x00, 0x54, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ²
        0x04, 0x44, 0x00, 0x54, 0x00, 0x54, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ³
        0x02, 0x06, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ´
        0x06, 0xF0, 0x1F, 0x00, 0x04, 0x00, 0x04, 0x00, 0x02, 0xF0, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char µ
        0x06, 0x10, 0x00, 0x7C, 0x00, 0xFC, 0x1F, 0x04, 0x00, 0xFC, 0x1F, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ¶
        0x02, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ·
        0x03, 0x00, 0x00, 0x00, 0x28, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ¸
        0x04, 0x40, 0x00, 0x44, 0x00, 0x78, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ¹
        0x04, 0x38, 0x00, 0x44, 0x00, 0x44, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char º
        0x05, 0x20, 0x02, 0x40, 0x01, 0x80, 0x00, 0x20, 0x02, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char »
        0x0A, 0x48, 0x00, 0x7C, 0x00, 0x40, 0x06, 0x00, 0x01, 0xC0, 0x00, 0x30, 0x00, 0x0C, 0x03, 0x80, 0x02, 0xC0, 0x07, 0x00, 0x02, 0x00, 0x00,  // Code for char ¼
        0x0A, 0x48, 0x00, 0x7C, 0x00, 0x40, 0x06, 0x00, 0x01, 0xC0, 0x00, 0x30, 0x00, 0x8C, 0x04, 0x40, 0x06, 0x40, 0x05, 0x80, 0x04, 0x00, 0x00,  // Code for char ½
        0x0A, 0x44, 0x00, 0x54, 0x00, 0x54, 0x00, 0x28, 0x06, 0x00, 0x01, 0xC0, 0x00, 0x30, 0x03, 0x8C, 0x02, 0xC0, 0x07, 0x00, 0x02, 0x00, 0x00,  // Code for char ¾
        0x05, 0x00, 0x0F, 0x80, 0x11, 0xD0, 0x10, 0x00, 0x10, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ¿
        0x07, 0x00, 0x06, 0xC0, 0x03, 0xB8, 0x00, 0x85, 0x00, 0xB8, 0x00, 0xC0, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char À
        0x07, 0x00, 0x06, 0xC0, 0x03, 0xB8, 0x00, 0x85, 0x00, 0xB8, 0x00, 0xC0, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Á
        0x07, 0x00, 0x06, 0xC0, 0x03, 0xB9, 0x00, 0x84, 0x00, 0xB8, 0x00, 0xC1, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Â
        0x07, 0x00, 0x06, 0xC0, 0x03, 0xB9, 0x00, 0x84, 0x00, 0xB9, 0x00, 0xC1, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ã
        0x07, 0x00, 0x06, 0xC0, 0x03, 0xB9, 0x00, 0x84, 0x00, 0xB8, 0x00, 0xC1, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ä
        0x07, 0x00, 0x06, 0xC0, 0x03, 0xBF, 0x00, 0x85, 0x00, 0xBF, 0x00, 0xC0, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Å
        0x0B, 0x00, 0x04, 0x00, 0x07, 0xC0, 0x00, 0xB8, 0x00, 0x8C, 0x00, 0x84, 0x00, 0xFC, 0x07, 0x44, 0x04, 0x44, 0x04, 0x44, 0x04, 0x44, 0x04,  // Code for char Æ
        0x07, 0xF0, 0x01, 0x08, 0x02, 0x04, 0x04, 0x04, 0x2C, 0x04, 0x3C, 0x04, 0x04, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ç
        0x06, 0xFC, 0x07, 0x44, 0x04, 0x44, 0x04, 0x45, 0x04, 0x44, 0x04, 0x44, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char È
        0x06, 0xFC, 0x07, 0x44, 0x04, 0x44, 0x04, 0x45, 0x04, 0x44, 0x04, 0x44, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char É
        0x06, 0xFC, 0x07, 0x45, 0x04, 0x44, 0x04, 0x44, 0x04, 0x45, 0x04, 0x44, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ê
        0x06, 0xFC, 0x07, 0x45, 0x04, 0x44, 0x04, 0x44, 0x04, 0x45, 0x04, 0x44, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ë
        0x01, 0xFD, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ì
        0x01, 0xFD, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Í
        0x04, 0x01, 0x00, 0xFC, 0x07, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Î
        0x04, 0x01, 0x00, 0xFC, 0x07, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ï
        0x08, 0x40, 0x00, 0xFC, 0x07, 0x44, 0x04, 0x44, 0x04, 0x44, 0x04, 0x04, 0x04, 0x08, 0x02, 0xF0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ð
        0x07, 0xFC, 0x07, 0x0C, 0x00, 0x31, 0x00, 0x40, 0x00, 0x81, 0x01, 0x01, 0x06, 0xFC, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ñ
        0x07, 0xF8, 0x03, 0x0C, 0x06, 0x04, 0x04, 0x05, 0x04, 0x04, 0x04, 0x0C, 0x06, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ò
        0x07, 0xF8, 0x03, 0x0C, 0x06, 0x04, 0x04, 0x05, 0x04, 0x04, 0x04, 0x0C, 0x06, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ó
        0x07, 0xF8, 0x03, 0x0C, 0x06, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0D, 0x06, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ô
        0x07, 0xF8, 0x03, 0x0C, 0x06, 0x05, 0x04, 0x04, 0x04, 0x05, 0x04, 0x0D, 0x06, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Õ
        0x07, 0xF8, 0x03, 0x0C, 0x06, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0D, 0x06, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ö
        0x05, 0x10, 0x01, 0xA0, 0x00, 0x40, 0x00, 0xA0, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ×
        0x07, 0xF8, 0x07, 0x0C, 0x07, 0x84, 0x05, 0x44, 0x04, 0x34, 0x04, 0x1C, 0x06, 0xFC, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ø
        0x07, 0xFC, 0x03, 0x00, 0x06, 0x00, 0x04, 0x00, 0x04, 0x01, 0x04, 0x00, 0x06, 0xFC, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ù
        0x07, 0xFC, 0x03, 0x00, 0x06, 0x00, 0x04, 0x01, 0x04, 0x00, 0x04, 0x00, 0x06, 0xFC, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ú
        0x07, 0xFC, 0x03, 0x00, 0x06, 0x01, 0x04, 0x00, 0x04, 0x00, 0x04, 0x01, 0x06, 0xFC, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Û
        0x07, 0xFC, 0x03, 0x00, 0x06, 0x01, 0x04, 0x00, 0x04, 0x00, 0x04, 0x01, 0x06, 0xFC, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ü
        0x05, 0x0C, 0x00, 0x30, 0x00, 0xC1, 0x07, 0x30, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Ý
        0x06, 0xFC, 0x07, 0x10, 0x01, 0x10, 0x01, 0x10, 0x01, 0x10, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Þ
        0x06, 0xF8, 0x07, 0x04, 0x00, 0x04, 0x04, 0x64, 0x04, 0xBC, 0x04, 0x88, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ß
        0x06, 0xA0, 0x07, 0x90, 0x04, 0x92, 0x04, 0x94, 0x02, 0xE0, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char à
        0x06, 0xA0, 0x07, 0x90, 0x04, 0x96, 0x04, 0x92, 0x02, 0xE0, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char á
        0x06, 0xA0, 0x07, 0x94, 0x04, 0x92, 0x04, 0x92, 0x02, 0xE4, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char â
        0x06, 0xA0, 0x07, 0x92, 0x04, 0x92, 0x04, 0x94, 0x02, 0xE6, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ã
        0x06, 0xA0, 0x07, 0x94, 0x04, 0x90, 0x04, 0x90, 0x02, 0xE4, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ä
        0x06, 0xA0, 0x07, 0x92, 0x04, 0x95, 0x04, 0x97, 0x02, 0xE0, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char å
        0x0A, 0x00, 0x03, 0xB0, 0x07, 0x90, 0x04, 0x90, 0x04, 0x90, 0x02, 0xE0, 0x03, 0x90, 0x04, 0x90, 0x04, 0x90, 0x04, 0xE0, 0x02, 0x00, 0x00,  // Code for char æ
        0x05, 0xE0, 0x03, 0x10, 0x04, 0x10, 0x2C, 0x30, 0x3E, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ç
        0x05, 0xE0, 0x03, 0x90, 0x04, 0x92, 0x04, 0x94, 0x04, 0xE0, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char è
        0x05, 0xE0, 0x03, 0x90, 0x04, 0x90, 0x04, 0x96, 0x04, 0xE2, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char é
        0x05, 0xE0, 0x03, 0x94, 0x04, 0x92, 0x04, 0x92, 0x04, 0xE4, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ê
        0x05, 0xE0, 0x03, 0x94, 0x04, 0x90, 0x04, 0x90, 0x04, 0xE4, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ë
        0x02, 0xF2, 0x07, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ì
        0x03, 0xF0, 0x07, 0x06, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char í
        0x04, 0x04, 0x00, 0xF2, 0x07, 0x02, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char î
        0x04, 0x04, 0x00, 0xF0, 0x07, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ï
        0x06, 0xD0, 0x03, 0x2C, 0x04, 0x28, 0x04, 0x34, 0x04, 0xE0, 0x03, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ð
        0x05, 0xF0, 0x07, 0x12, 0x00, 0x12, 0x00, 0x14, 0x00, 0xE6, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ñ
        0x05, 0xE0, 0x03, 0x10, 0x04, 0x12, 0x04, 0x14, 0x04, 0xE0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ò
        0x05, 0xE0, 0x03, 0x10, 0x04, 0x10, 0x04, 0x16, 0x04, 0xE2, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ó
        0x05, 0xE0, 0x03, 0x14, 0x04, 0x12, 0x04, 0x12, 0x04, 0xE4, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ô
        0x05, 0xE0, 0x03, 0x12, 0x04, 0x12, 0x04, 0x14, 0x04, 0xE6, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char õ
        0x05, 0xE0, 0x03, 0x14, 0x04, 0x10, 0x04, 0x10, 0x04, 0xE4, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ö
        0x07, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x50, 0x01, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ÷
        0x05, 0xE0, 0x07, 0x10, 0x05, 0x90, 0x04, 0x50, 0x04, 0xF0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ø
        0x05, 0xF0, 0x03, 0x00, 0x04, 0x02, 0x04, 0x04, 0x04, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ù
        0x05, 0xF0, 0x03, 0x00, 0x04, 0x06, 0x04, 0x02, 0x04, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ú
        0x05, 0xF0, 0x03, 0x04, 0x04, 0x02, 0x04, 0x02, 0x04, 0xF4, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char û
        0x05, 0xF0, 0x03, 0x04, 0x04, 0x00, 0x04, 0x00, 0x04, 0xF4, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ü
        0x05, 0x30, 0x10, 0xE0, 0x11, 0x06, 0x0E, 0xC2, 0x01, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ý
        0x05, 0xFC, 0x1F, 0x10, 0x04, 0x10, 0x04, 0x10, 0x04, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char þ
        0x05, 0x30, 0x10, 0xE4, 0x11, 0x00, 0x0E, 0xC0, 0x01, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00   // Code for char ÿ
};

extern const LcdFont font11x14 =
{
	Liberation_Sans11x14,	// font data
	0x0020,					// first character code
	0x00FF,					// last character code
	14,						// row height in pixels
	11,						// character width in pixels
	1						// number of space columns between characters before kerning
};

#endif

// End
