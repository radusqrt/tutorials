#include <iostream>

#include "Student.hpp"

int main() {
    Student s;
    Student s2(12, "Radu", "123");

    std::cout << s.getAge() << " " << s.getName() << " " << s.getPhoneNo() << std::endl;
    std::cout << s2.getAge() << " " << s2.getName() << " " << s2.getPhoneNo() << std::endl;
    return 0;
}