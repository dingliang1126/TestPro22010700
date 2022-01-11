#include "Rectangle.h"
#include <stdio.h>

static uint32_t _Rectangle_area_(Shape const* const me);
static void _Rectangle_draw_(Shape const* const me);


void Rectangle_ctor(Rectangle* const me, int16_t x, int16_t y, 
                    uint16_t width, uint16_t height)
{
    static ShapeVtbl const vtbl ={
        &_Rectangle_area_,
        &_Rectangle_draw_
    };

    Shape_ctor(&me->super, x, y);
    me->super.vptr = &vtbl;
    me->width = width;
    me->height = height;
}

static uint32_t _Rectangle_area_(Shape const* const me){
    Rectangle const* const _me_ = (Rectangle const*)me;
    return (uint32_t)_me_->width * (uint32_t)_me_->height;
}

static void _Rectangle_draw_(Shape const* const me){
    Rectangle const* const _me_ = (Rectangle const*)me;
    printf("_Rectangle_draw_(x=%d, y=%d, width=%d, height=%d)\n",
            Shape_getX(me), Shape_getY(me), _me_->width, _me_->height);
}

                    
