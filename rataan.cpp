/*Prgram Menghitung Rataan Dari n Bilangan*/
#include<iostream>
#include<conio.h>

/*
Nama : Muhammad Afdan Rojabi
NIM : J3C114066
*/

using namespace std;
main()
{
	int i, count, input, jumlah=0, rataan=0;
	
	cout<<"Berapa bilangan yang akan diinputkan ? ";
	cin>>count;
	
	for(i=0; i<count; i++){
		cout<<"Masukkan bilangan ke-"<<i+1<<" : ";
		cin>>input;
		jumlah+=input;
	}
	
	rataan = jumlah/count;
	cout<<"Rataan dari "<<count<<"nilai anda (dibulatkan) : "<<rataan;
	getche();
}
