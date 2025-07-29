#include <iostream>
#include <cassert>

// Returns the T-shirt size based on chest measurement in cms
char getTshirtSize(int cms) {
    if (cms < 38) {
        return 'S';
    } 
    else if (cms <= 42) {   // fixed condition: include 38 and 42 in 'M' range
        return 'M';
    } 
    else {
        return 'L';
    }
}

void testTshirtSize() {
    std::cout << "\nT-shirt size test\n";
    assert(getTshirtSize(37) == 'S');
    assert(getTshirtSize(38) == 'M');  // added boundary test case
    assert(getTshirtSize(40) == 'M');
    assert(getTshirtSize(42) == 'M');  // added boundary test case
    assert(getTshirtSize(43) == 'L');
    std::cout << "All is well (maybe!)\n";
}

int main() {
    testTshirtSize();
    return 0;
}
