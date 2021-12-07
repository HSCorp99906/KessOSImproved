#ifndef SCREEN_H
#define SCREEN_H


#include <stdint.h>


typedef enum Color {
    BLACK,
    BLUE,
    GREEN,
    CYAN,
    RED,
    MAGENTA,
    BROWN,
    LIGHTGRAY,
    DARKGRAY,
    LIGHTBLUE,
    LIGHTGREEN,
    LIGHTCYAN,
    LIGHTRED,
    PINK,
    YELLOW,
    WHITE,
} color_t;


struct ScreenChar {
    uint8_t ascii_char;
    color_t colorCode;
};


#endif
