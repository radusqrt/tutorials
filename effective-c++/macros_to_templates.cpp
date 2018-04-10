#include <iostream>

void f(int x) {
    std::cout << x << std::endl;
}

template<typename T>
// we don't know what type T is so we can pass it as a reference to const
// THAT'S FUCKING AWESOME
inline void callWithMax(const T& a, const T& b) {
    f(a > b ? a : b);
}

int main() {
    callWithMax(2, 3);
    return 0;
}