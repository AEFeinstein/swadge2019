/*
 * oled.h
 *
 *  Created on: Mar 16, 2019
 *      Author: adam
 */

#ifndef OLED_H_
#define OLED_H_

#include "c_types.h"

typedef enum
{
    BLACK = 0,
    WHITE = 1,
    INVERSE = 2
} color;

#define OLED_WIDTH 128
#define OLED_HEIGHT 64

bool begin(bool reset);
void drawPixel(uint8_t x, uint8_t y, color c);
bool display(void);
void clearDisplay(void);
void fillDisplayArea(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, color c);

#endif /* OLED_H_ */