//program konversi suhu
//made by rahmadi priambudi riadi
#include <iostream>
using namespace std;
int main() {
	cout<<"PROGRAM C++ KONVERSI SUHU"<<endl;
	float c, k, f, r;
	
	cout<<"Masukan Suhu (Celsius) : ";
	cin>>c;
	
	k=c+273;
	f=(c*1.8)+32;
	r=c*0.8;
	
	cout<<endl;
	cout<<"Hasil Konversi Suhu dari Celsius ke:"<<endl;
	cout<<"Kelvin     : "<<k<<endl;
	cout<<"Fahrenheit : "<<f<<endl;
	cout<<"Reaumur    : "<<r<<endl;
	
	return 0;
}
