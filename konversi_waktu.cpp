#include<iostream>
#include<conio.h>

/* 
Nama : Muhammad Afdan Rojabi 
NIM  : J3C114066
*/

using namespace std;
main()
{
	int detik, menit, jam, hari, sisa;
	
	menu:
		cout<<"=========================================="<<endl;
		cout<<"|\t**PROGRAM KONVERSI WAKTU**\t |"<<endl;
		cout<<"=========================================="<<endl;
		cout<<" Masukan Jumlah Detik = ";
		cin>>detik;
		cout<<"=========================================="<<endl;
	
		hari = detik / 86400;
		sisa = detik % 86400;
		jam = sisa / 3600;
		sisa = sisa % 3600;
		menit = sisa / 60;
		sisa = sisa % 60;
		
		cout<<"|  "<<hari<<" hari - "<<jam<<" jam - "<<menit<<" menit - "<<sisa<<" detik    |"<<endl;
		cout<<"=========================================="<<endl;
	
	getche();
	return 0;
}
