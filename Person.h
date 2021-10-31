#pragma once
#include <string>
using namespace std;
class Person
{
    private:
        string name;
        string dob;
        int age;
        string address;
        string phoneNumber;
    public:
        //constructor
        Person()
        {}
        Person(string name, string dob, int age, string address, string phoneNumber)
        {}
        //destructor
        ~Person()
        {}
        //setter
        void setName(string name)
        {}
        void setDob(string dob)
        {}
        void setAge(int age)
        {}
        void setAddress(string address)
        {}
        void setPhoneNumber(string phoneNumber)
        {}
        //getter
        string getName()
        {}
        string getDob()
        {}
        int getAge()
        {}
        string getAdress()
        {}
        string getPhoneNumber()
        {}
        //display information about person's object
        void display()
        {}
        //abstract method
        virtual double payment() = 0;
};