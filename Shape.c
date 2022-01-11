#include "Shape.h"
#include <assert.h>

static uint32_t _Shape_area_(Shape const* const me);
static void _Shape_draw_(Shape const* const me);



void Shape_ctor(Shape* const me, int16_t x, int16_t y){
    static ShapeVtbl const vtbl = {
        &_Shape_area_,
        &_Shape_draw_
    };
    me->vptr = &vtbl;
    me->x = x;
    me->y = y;
}

void Shape_moveBy(Shape* const me, int16_t x, int16_t y){
    me->x += x;
    me->y += y;
}

int16_t Shape_getX(Shape const* const me){
    return me->x;
}

int16_t Shape_getY(Shape const* const me){
    return me->y;
}

static uint32_t _Shape_area_(Shape const* const me){
    assert(0);
    return 0U;
}

static void _Shape_draw_(Shape const* const me){
    assert(0);
}

Shape const* largestShape(Shape const* shapes[], uint32_t nShapes){
    Shape const* s = (Shape*)0;
    u_int32_t max = 0U;
    uint32_t i;
    for (i=0U; i<nShapes; i++){
        u_int32_t area = Shape_area(shapes[i]);
        if (area > max){
            max = area;
            s = shapes[i];
        }
    }
    return s;
}

void drawAllShapes(Shape const* shapes[], uint32_t nShapes){
    uint32_t i;
    for (i=0U; i<nShapes; i++){
        Shape_draw(shapes[i]);
    }
}



