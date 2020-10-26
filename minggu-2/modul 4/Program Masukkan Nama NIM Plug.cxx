#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char nama[20], nim[20], plug[20];
    cout<<"Masukkan : "<<endl;
    cout<<"Nama     : "; cin.getline(nama, 20);
    cout<<"NIM      : "; cin.getline(nim, 20);
    cout<<"Plug     : "; cin.getline(plug, 20);
    cout<<endl;
    
    cout<<"Inilah data anda : "<<endl;
    cout<<"Nama             : "<<nama<<endl;
    cout<<"NIM              : "<<nim<<endl;
    cout<<"Plug             : "<<plug<<endl<<endl;
    
    cout<<"Dalam bentuk tabel : "<<endl;
    cout<<"=================================================="<<endl;
    cout<<"NIM"<<setw(10)<<"|"<<setw(10)<<"Nama"<<setw(10)<<"|"<<setw(10)<<"Plug"<<endl;
    cout<<"=================================================="<<endl;
    cout<<nim<<setw(21)<<nama<<setw(16)<<plug<<endl;
    cout<<"--------------------------------------------------"<<endl;
}
