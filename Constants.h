#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];

    extern const int numberOfMajorColors;
    extern const int numberOfMinorColors;
}

#endif
