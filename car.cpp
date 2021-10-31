#include "car.h"
#include<iostream>
#include<conio.h>
using namespace std;
void Car::NhapThongTin()
{
        while (getchar()!='\n');
        cout<<"\nNhap ho ten nguoi thue: ";
        getline(cin,name_Customer);
        cout<<"\nNhap so gio thue: ";
        cin>>_SoGioThue;
}
void Car::show()
{
    cout<<"\nHo Ten nguoi thue: "<<name_Customer;
    cout<<"\nSo gio thue: "<< _SoGioThue;
}
