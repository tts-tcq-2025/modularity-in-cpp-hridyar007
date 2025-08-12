#include "Manual.h"
#include "ColorUtils.h"
#include "Constants.h"

namespace TelCoColorCoder
{
    std::string GenerateReferenceManual() {
        std::string manual;
        int totalPairs = numberOfMajorColors * numberOfMinorColors;
        for (int pairNumber = 1; pairNumber <= totalPairs; ++pairNumber) {
            ColorPair pair = GetColorFromPairNumber(pairNumber);
            manual += std::to_string(pairNumber) + " -> " + pair.ToString() + "\n";
        }
        return manual;
    }
}
