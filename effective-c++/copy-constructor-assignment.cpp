#include <iostream>

class Widget {
    public:
        Widget() {
            std::cout << "CALL DEFAULT CONSTRUCTOR\n";
        }

        Widget(const Widget& rhs) {
            std::cout << "CALL COPY CONSTRUCTOR\n";
        }

        Widget& operator=(const Widget& rhs) {
            std::cout << "CALL COPY ASSIGNMENT OPERATOR\n";
        }
};

int main() {
    Widget w1;
    Widget w2(w1);
    w1 = w2;
    Widget w3 = w2;

    return 0;
}