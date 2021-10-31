#include "Person.h"
class Manager : public Person
{
    private:
        double payPerHour;
        int workingHours;
        int bonus;
    public:
        //constructor
        Manager()
        {}
        Manager(string name, string dob, int age, string address, string phoneNumber, double payPerHour, int workingHours)
        : Person(name, dob, age, address, phoneNumber)
        {}
        //destructor
        ~Manager()
        {}
        //setter
        void setpayPerHour(double payPerHour)
        {}
        void setWorkingHours(int workingHours)
        {}
        void setBonus(int bonus)
        {}
        //getter
        double getpayPerHour()
        {}
        int getworkingHours()
        {}
        int getBonus()
        {}
        string getName()
        {}
        //salary of manager
        double payment()
        {}
};