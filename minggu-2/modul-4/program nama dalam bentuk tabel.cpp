//tugas 1 
//modul 4
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int nim ,plug;
	string nama;
	
	cout<<"masukkan	:"<<endl;
	cout<<"Nama	:";getline (cin,nama);
	cout<<"NIM	:";cin>>nim;
	cout<<"plug	:";cin>>plug;
	cout<<endl;
	cout<<"inilah data anda	:"<<endl;
	cout<<"Nama	:"<<nama<<endl;
	cout<<"NIM	:"<<nim<<endl;
	cout<<"plug	:"<<plug<<endl;
	cout<<endl;
	
	cout<<"dalam bentuk tabel	:"<<endl;
	cout<<"===================================================="<<endl;
	cout<<"NIM       |          Nama                |    plug  "<<endl;
	cout<<"===================================================="<<endl;
	cout<<setw(10)<<nim<<setw(30)<<nama<<setw(10)<<plug<<endl;
	
	return 0;
}

