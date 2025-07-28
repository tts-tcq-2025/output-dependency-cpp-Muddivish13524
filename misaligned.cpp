#include <iostream>
#include <assert.h>
#include <cassert>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    const int majorCount = sizeof(majorColor) / sizeof(majorColor[0]);
    const int minorCount = sizeof(minorColor) / sizeof(minorColor[0]);

    int count = 0;
    for (int i = 0; i < majorCount; ++i) {
        for (int j = 0; j < minorCount; ++j) {
            std::cout << (i * minorCount + j) << " | " << majorColor[i] << " | " << minorColor[j] << "\n";
            ++count;
        }
    }
    return count;
}

void testPrintColorMap() {
    std::cout << "\nPrint color map test\n";
    int result = printColorMap();
    assert(result == 25);  // 5 major * 5 minor colors
    std::cout << "All is well (maybe!)\n";
}
