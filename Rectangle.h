#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

typedef struct _Rectangle
{
    Shape super;

    uint16_t width;
    uint16_t height;
} Rectangle;

void Rectangle_ctor(Rectangle* const me, int16_t x, int16_t y, 
                    uint16_t width, uint16_t height);


#endif /* RECTANGLE_H */
