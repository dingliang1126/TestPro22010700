#include "Rectangle.h"
#include <stdio.h>

int main()
{
    // Shape s1, s2;
    // Shape_ctor(&s1, 0, 1);
    // Shape_ctor(&s2, -1, 2);

    // printf("Shape s1(x=%d, y=%d)\n", Shape_getX(&s1), Shape_getY(&s1));
    // printf("Shape s2(x=%d, y=%d)\n", Shape_getX(&s2), Shape_getY(&s2));

    // Shape_moveBy(&s1, 2, -4);
    // Shape_moveBy(&s2, 1, -2);

    // printf("Shape s1(x=%d, y=%d)\n", Shape_getX(&s1), Shape_getY(&s1));
    // printf("Shape s2(x=%d, y=%d)\n", Shape_getX(&s2), Shape_getY(&s2));

    // Rectangle r1, r2;

    // Rectangle_ctor(&r1, 0, 2, 10 , 15);
    // Rectangle_ctor(&r2, -1, 3, 5, 8);

    // printf("rect r1(x=%d, y=%d, width=%d, height=%d)\n",
    //         Shape_getX(&r1.super), Shape_getY(&r1.super), r1.width, r1.height);
    // printf("rect 21(x=%d, y=%d, width=%d, height=%d)\n",
    //         Shape_getX(&r2.super), Shape_getY(&r2.super), r2.width, r2.height);

    // Shape_moveBy(&r1.super, -2, 3);
    // Shape_moveBy(&r2.super, 2, -1);

    // printf("rect r1(x=%d, y=%d, width=%d, height=%d)\n",
    //         Shape_getX(&r1.super), Shape_getY(&r1.super), r1.width, r1.height);
    // printf("rect 21(x=%d, y=%d, width=%d, height=%d)\n",
    //         Shape_getX(&r2.super), Shape_getY(&r2.super), r2.width, r2.height);

    Rectangle r1, r2;

    Shape const *shapes[] = {
        &r1.super,
        &r2.super};

    Rectangle_ctor(&r1, 0, 2, 10, 15);
    Rectangle_ctor(&r2, -1, 3, 5, 80);

    Shape const *s;

    s = largestShape(shapes, sizeof(shapes) / sizeof(shapes[0]));
    printf("largestShape s(=%d, y=%d)\n", Shape_getX(s), Shape_getY(s));
    drawAllShapes(shapes, sizeof(shapes) / sizeof(shapes[0]));

    Shape_moveBy(&r1.super, 10, 10);
    Shape_moveBy(&r2.super, -5, -5);

    drawAllShapes(shapes, sizeof(shapes) / sizeof(shapes[0]));

    // struct defCSL   //声明结构体char_short_long
    // {
    //     char  c;
    //     short s;
    //     long  l;
    // } char_short_long;

    // struct defLSC  //声明结构体long_short_char
    // {
    //     long  l;
    //     short s;
    //     char  c;
    // } long_short_char;

    struct //声明结构体char_long_short
    {
        char c;
        long l;
        short s;

    } char_long_short;

    // printf(" \n");
    // printf(" Size of char   = %d bytes\n",sizeof(char));
    // printf(" Size of shrot  = %d bytes\n",sizeof(short));
    // printf(" Size of long   = %d bytes\n",sizeof(long));
    // printf(" \n");  //char_short_long
    // printf(" Size of char_short_long       = %d bytes\n",sizeof(char_short_long));
    // printf("     Addr of char_short_long.c = 0x%p (10进制：%d)\n",&char_short_long.c,&char_short_long.c);
    // printf("     Addr of char_short_long.s = 0x%p (10进制：%d)\n",&char_short_long.s,&char_short_long.s);
    // printf("     Addr of char_short_long.l = 0x%p (10进制：%d)\n",&char_short_long.l,&char_short_long.l);
    // printf(" \n");

    // printf(" \n");  //long_short_char
    // printf(" Size of long_short_char       = %d bytes\n",sizeof(long_short_char));
    // printf("     Addr of long_short_char.l = 0x%p (10进制：%d)\n",&long_short_char.l,&long_short_char.l);
    // printf("     Addr of long_short_char.s = 0x%p (10进制：%d)\n",&long_short_char.s,&long_short_char.s);
    // printf("     Addr of long_short_char.c = 0x%p (10进制：%d)\n",&long_short_char.c,&long_short_char.c);
    // printf(" \n");

    printf(" \n"); // char_long_short
    printf(" Size of char_long_short       = %d bytes\n", (int)sizeof(char_long_short));
    printf("     Addr of char_long_short.c = %p (10进制：%ld)\n", (void*)&char_long_short.c, (long)&char_long_short.c);
    printf("     Addr of char_long_short.l = %p (10进制：%ld)\n", (void*)&char_long_short.l, (long)&char_long_short.l);
    printf("     Addr of char_long_short.s = %p (10进制：%ld)\n", (void*)&char_long_short.s, (long)&char_long_short.s);
    printf(" \n");

    printf(" \n"); // char_long_short
    printf(" Size of char_long_short       = %d bytes\n", (int)sizeof(char_long_short));
    printf("     Addr of char_long_short.c = %p (10进制：%ld)\n", (void*)&char_long_short.c, (long)&char_long_short.c);
    printf("     Addr of char_long_short.l = %p (10进制：%ld)\n", (void*)&char_long_short.l, (long)&char_long_short.l);
    printf("     Addr of char_long_short.s = %p (10进制：%ld)\n", (void*)&char_long_short.s, (long)&char_long_short.s);
    printf(" \n");

    printf(" \n"); // char_long_short
    printf(" Size of char_long_short       = %d bytes\n", (int)sizeof(char_long_short));
    printf("     Addr of char_long_short.c = %p (10进制：%ld)\n", (void*)&char_long_short.c, (long)&char_long_short.c);
    printf("     Addr of char_long_short.l = %p (10进制：%ld)\n", (void*)&char_long_short.l, (long)&char_long_short.l);
    printf("     Addr of char_long_short.s = %p (10进制：%ld)\n", (void*)&char_long_short.s, (long)&char_long_short.s);
    printf(" \n");


    return 0;
}

