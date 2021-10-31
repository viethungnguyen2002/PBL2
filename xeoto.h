#include "car.h"
#include<string>
#include<iostream>
using namespace std;
class XEOTO : public Car
{
    private:
        int LoaiXe;
        string BienSo;
    public:
        float TinhTienThueXe();
        void NhapThongTin();
        void show();
};