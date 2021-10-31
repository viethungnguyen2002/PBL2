#include "Person.h"
#include "Employee.h"
class Customer : public Person
{
    private:
        string type;
        int hoursRented;
        string payMethod;
        Employee employee;
    public:
        //constructor
        Customer()
        {}
        Customer(string name, string dob, int age, string address, string phoneNumber ,string type, int hoursRented, string payMethod, Employee employee)
        :Person(name, dob, age, address, phoneNumber)
        {}
        //destructor
        ~Customer()
        {}
        //setter
        void setType(string type)
        {}
        void sethoursRented(int hoursRented)
        {}
        void setPayMethod(string payMethod)
        {}
        //getter
        string getType()
        {}
        int getHoursRented()
        {}
        //get Employee's name
        string getEmployeeName()
        {}
        string getPayMethod()
        {}
        double payment()
        {}
};