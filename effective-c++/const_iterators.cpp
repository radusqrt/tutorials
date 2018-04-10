#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3};
    // WORKS
    for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << std::endl;
    }

    // COMPILE ERROR: cannot modify v using const_iterator
    // for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) {
    //     (*it) ++;
    //     std::cout << *it << std::endl;
    // }

    // COMPILE ERROR: cannot modify the iterator it
    // for (const std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) {
    //     std::cout << *it << std::endl;
    // }

    return 0;
}