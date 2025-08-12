#include "ColorUtils.h"
#include <stdexcept>

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber) {
        if (pairNumber < 1 || pairNumber > numberOfMajorColors * numberOfMinorColors) {
            throw std::out_of_range("Invalid pair number");
        }
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
}
