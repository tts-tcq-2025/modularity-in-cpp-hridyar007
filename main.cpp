#include "Manual.h"
#include "ColorUtils.h"
#include "Constants.h"
#include <iomanip> // for setw
#include <sstream> // for ostringstream

namespace TelCoColorCoder
{
    std::string GenerateReferenceManual() {
        std::ostringstream manual;
        int totalPairs = numberOfMajorColors * numberOfMinorColors;

        // Header
        manual << std::left << std::setw(12) << "Pair Number"
               << std::setw(15) << "Major Color"
               << std::setw(15) << "Minor Color" << "\n";
        manual << std::string(42, '-') << "\n";

        // Group by major color
        for (int major = 0; major < numberOfMajorColors; ++major) {
            manual << "\n=== " << MajorColorNames[major] << " Group ===\n";
            for (int minor = 0; minor < numberOfMinorColors; ++minor) {
                int pairNumber = GetPairNumberFromColor(
                    static_cast<MajorColor>(major),
                    static_cast<MinorColor>(minor)
                );
                manual << std::left << std::setw(12) << pairNumber
                       << std::setw(15) << MajorColorNames[major]
                       << std::setw(15) << MinorColorNames[minor] << "\n";
            }
        }

        return manual.str();
    }
}
