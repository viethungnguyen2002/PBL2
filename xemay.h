#include "car.h"
#include<string>
#include<iostream>
using namespace std;
class XEMAY : public Car
{
    private:
        int LoaiXe;
        string BienSo;
    public:
        float TinhTienThueXe();
        void NhapThongTin();
        void show();
};