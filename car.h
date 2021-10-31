#include<iostream>
#include<string>
using namespace std;
class Car{
    private:
        string color;
    protected:
        string name_Customer;
        float _SoGioThue;
    public:
        void NhapThongTin();
        void show();
};