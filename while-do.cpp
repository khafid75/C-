#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    int a=0;
    cout<<"Menentukan bilangan genap 1-100 =";
    do
    {
        a=a+2;
        cout<<a<<" ";
    }
    while(a<=100);
    cout<<endl;
    cout<<endl;
    a=0;
    cout<<"Menentukan bilangan ganjil 1-100 =";
    do
    {
        a=a+1;
        cout<<a<<" ";
        a++;
    }
    while(a<=100);
    cout<<endl;
    cout<<endl;
    a=0;
    cout<<"Mencari Bilangan kelipatan 5 dari 1-100 =";
    do
    {
        if(a%5==0 && a%2!=0)
            cout<<a<<" ";
            a++;
    }
    while(a<=100);
    cout<<endl;
    cout<<endl;
    float penjumlahan=0;
    a=0;
    cout<<"Menjumlahkan bilangan 1-100 =";
    do
    {
        a++;
        penjumlahan+=a;
        cout<<penjumlahan<<" ";
    }
    while(a<=100);
    getch();
}
