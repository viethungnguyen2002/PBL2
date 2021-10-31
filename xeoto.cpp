#include "xeoto.h"
#include<iostream>
#include<conio.h>
using namespace std;
void XEOTO::NhapThongTin()
{
    Car::NhapThongTin();
    cout <<"\nNhap loai xe can thue: ";
    cin>>LoaiXe;
    while (getchar() != '\n' );
    cout <<"\nNhap bien so xe can thue: ";
    getline(cin,BienSo);
}
void XEOTO::show()
{
    Car::show();
    cout<<"\nLoai Xe: "<<LoaiXe;
    cout<<"\nBien so: "<<BienSo;
}
float XEOTO::TinhTienThueXe()
{
    return 150000*_SoGioThue;
}