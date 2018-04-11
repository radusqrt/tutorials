#include <string>

class Student {
private:
    int age;
    std::string name;
    std::string phoneNo;
    float rating;

public:
    Student();
    Student(int age, const std::string& name, const std::string& phoneNo);

    int getAge();
    std::string getName();
    std::string getPhoneNo();
};