#pragma once
#include "Person.h"
#include <iostream>
using namespace std;
Person :: Person()
{}
Person :: Person(string name, string dob, int age, string address, string phoneNumber)
{
    this -> name = name;
    this -> dob = dob;
    this -> age = age;
    this -> address = address;
    this -> phoneNumber = phoneNumber;
}
Person :: ~ Person()
{}
void Person :: setName(string name)
{
    this -> name = name;
}
void Person :: setDob(string dob)
{
    this -> dob = dob;
}
void Person :: setAge(int age)
{
    this -> age = age;
}
void Person :: setAddress(string address)
{
    this -> address = address;
}
void Person :: setPhoneNumber(string phoneNumber)
{
    this -> phoneNumber = phoneNumber;
}
string Person :: getName()
{
    return name;
}
string Person :: getDob()
{
    return dob;
}
int Person :: getAge()
{
    return age;
}
string Person :: getAddress()
{
    return address;
}
string Person :: getPhoneNumber()
{
    return phoneNumber;
}
void Person :: display()
{
    cout << "Name: " << name << endl;
    cout << "Date of birth: " << dob << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phoneNumber << endl;
}
