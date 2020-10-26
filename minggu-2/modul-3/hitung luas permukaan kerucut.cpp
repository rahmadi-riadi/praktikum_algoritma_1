//tugas praktikum algoritma dan pemrograman 
//modul3
//luas permukaan kerucut

//rahmadi priambudi riadi
//123200155
#include <iostream>
using namespace std;

int main()
{
	int pilih;
	float l_permukaan, l_selimut, l_alas, r , s;
	const float phi = 3.14;
	awal :
	cout << "=================================="<<endl;
	cout << " MENGHITUNG LUAS PERMUKAAN KERUCUT"<<endl;
	cout << "=================================="<<endl;
	
	cout << "masukkan nilai jari-jari	:"; cin >> r ;
	cout << "masukkan nilai garis pelukis	:"; cin >> s ;
	cout << endl;
	
	l_selimut = phi * r * s ;
	l_alas = phi * r * r;
	l_permukaan = l_selimut + l_alas;
	
	cout << " luas selimut	:"<< l_selimut << endl ;
	cout << " luas alas 	:"<< l_alas << endl ;
	cout << " luas permukaan	:"<< l_permukaan<<endl;
	cout << endl;
	
	cout << " Apakah anda ingin mengulang ?"<<endl;
	cout << " pilih  ( 1 ) jika iya"<<endl;
	cout << " pilih  ( 2 ) jika tidak"<<endl;
	cout << " apa yang anda pilih:";cin>> pilih;

	if (pilih==1)
	goto awal;
	else if (pilih==2)
	goto akhir;

	akhir:
	
	system ("exit");
	
	return 0;
}

