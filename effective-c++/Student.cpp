#include "Student.hpp"

Student::Student()
:   age(0),
    name("None"),
    phoneNo("---"),
    rating(0.0)
{}

Student::Student(int age, const std::string& name, const std::string& phoneNo)
:   age(age),
    name(name),
    phoneNo(phoneNo),
    rating(0.0)
{}

int Student::getAge() {
    return age;
}

std::string Student::getName() {
    return name;
}

std::string Student::getPhoneNo() {
    return phoneNo;
}