#include <iostream>
#include <string>
#include <format>

namespace user
{
    class Person
    {
    public:
        std::string name;
        int age;

        // constructor
        Person(std::string name, int age)
        {
            this->name = name;
            this->age = age;
        }

        // display some details
        std::string details()
        {
            return std::format("{} is {} years old", this->name, this->age);
        }
    };
}

int main()
{

    user::Person tahazzot("Tahazzot", 22); // using the namespace 'user'
    std::cout << tahazzot.details();

    return 0;
}