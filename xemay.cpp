#include "xemay.h"
#include<iostream>
#include<conio.h>
using namespace std;
void XEMAY::NhapThongTin()
{
    Car::NhapThongTin();
    cout <<"\nNhap loai xe can thue(100 - 250 phan khoi): ";
    cin>>LoaiXe;
    while (getchar() != '\n' );
    cout <<"\nNhap bien so xe can thue: ";
    getline(cin,BienSo);
}
void XEMAY::show()
{
    Car::show();
    cout<<"\nLoai Xe: "<<LoaiXe;
    cout<<"\nBien so: "<<BienSo;
}
float XEMAY::TinhTienThueXe()
{
    float s = 0;
    if(LoaiXe ==100)
    {
        s=30000;
    }
    else{
        s=50000;
    }
    return s*_SoGioThue;
}