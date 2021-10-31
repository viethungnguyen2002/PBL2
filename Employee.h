#include "Person.h"
#include "Manager.h"
class Employee : public Person
{
    private:
        double payPerHour;
        int workingHours;
        Manager manager;
    public:
        //constructor
        Employee()
        {}
        Employee(string name, string dob, int age, string address, string phoneNumber, int payPerHour, int workingHours, Manager manager)
        : Person(name, dob, age, address, phoneNumber)
        {}
        //destructor
        ~Employee()
        {}
        //setter
        void setPaymentPerHour(int payPerHour)
        {}
        void setWorkingHours(int workingHours)
        {}
        //getter
        int getPaymentPerHour()
        {}
        int getWorkingHours()
        {}
        string getName()
        {}
        //salary of employee
        double payment()
        {}
        //get manager's name
        string getManagerName()
        {}
};