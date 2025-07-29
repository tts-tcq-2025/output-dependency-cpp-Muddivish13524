#include <iostream>
#include <cassert>
#include <string_view>
#include <array>

constexpr std::array<std::string_view, 5> majorColors = {"White", "Red", "Black", "Yellow", "Violet"};
constexpr std::array<std::string_view, 5> minorColors = {"Blue", "Orange", "Green", "Brown", "Slate"};

int printColorMap() {
    int count = 0;
    for (size_t i = 0; i < majorColors.size(); ++i) {
        for (size_t j = 0; j < minorColors.size(); ++j) {
            std::cout << (i * minorColors.size() + j) << " | " << majorColors[i] << " | " << minorColors[j] << '\n';
            ++count;
        }
    }
    return count;
}

void testPrintColorMap() {
    std::cout << "\nPrint color map test\n";
    int result = printColorMap();
    assert(result == static_cast<int>(majorColors.size() * minorColors.size()));
    std::cout << "All is well (maybe!)\n";
}

int main() {
    testPrintColorMap();
    return 0;
}
