#include <iostream>

using namespace std;
int main()
{
float C, K, R, F;
cout<<"Masukkan suhu celcius : "; cin>>C;
cout<<endl;

F = (9 * C)/5 + 32;
R = (4 * C)/9 + 32;
K = 273 + C;

cout<<"Hasil      : "<<endl;
cout<<"Fahrenheit : "<<F<<endl;
cout<<"Reamur     : "<<R<<endl;
cout<<"Kelvin     : "<<K<<endl;

}
