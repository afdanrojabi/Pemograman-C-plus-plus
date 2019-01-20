#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

/*
Nama : Muhammad Afdan Rojabi
NIM : J3C114066
*/

float jumlah(float bil1, float bil2)
{
	float hasil;
	hasil = bil1 + bil2;
	return (hasil);
}

float kurang(float bil1, float bil2)
{
	float hasil;
	hasil = bil1 - bil2;
	return (hasil);
}

float kali(float bil1, float bil2)
{
	float hasil;
	hasil = bil1 * bil2;
	return (hasil);
}

float bagi(float bil1, float bil2)
{
	float hasil;
	hasil = bil1 / bil2;
	return (hasil);
}

int menu()
{
	int pilih;
	float a, b;
	
	cout<<"======================================="<<endl;
	cout<<"|	***KALKULATOR MINI***	      |"<<endl;
	cout<<"======================================="<<endl;
	cout<<"|Pilihan : 			      |"<<endl;
	cout<<"|1. Penjumlahan			      |"<<endl;
	cout<<"|2. Pengurangan			      |"<<endl;
	cout<<"|3. Perkalian			      |"<<endl;
	cout<<"|4. Pembagian			      |"<<endl;
	cout<<"======================================="<<endl;
	cout<<"Tentukan pilihan (1-4) = ";
	cin>>pilih;
	
	switch (pilih)
	{
		case 1:
			cout<<"Masukkan bilangan pertama = ";
			cin>>a;
			cout<<"Masukkan bilangan kedua = ";
			cin>>b;
			cout<<"Hasil "<<a<<" + "<<b<<" = "<<jumlah(a,b)<<endl;
			break;
			
		case 2:
			cout<<"Masukkan bilangan pertama = ";
			cin>>a;
			cout<<"Masukkan bilangan kedua = ";
			cin>>b;
			cout<<"Hasil "<<a<<" - "<<b<<" = "<<kurang(a,b)<<endl;
			break;
			
		case 3:
			cout<<"Masukkan bilangan pertama = ";
			cin>>a;
			cout<<"Masukkan bilangan kedua = ";
			cin>>b;
			cout<<"Hasil "<<a<<" * "<<b<<" = "<<kali(a,b)<<endl;
			break;
			
		case 4:
			cout<<"Masukkan bilangan pertama = ";
			cin>>a;
			cout<<"Masukkan bilangan kedua = ";
			cin>>b;
			cout<<"Hasil "<<a<<" / "<<b<<" = "<<bagi(a,b)<<endl;
			break;
			
		default:
			cout<<"	**ERROR!!!**	"<<endl;
			break;
	}
}

main()
{
	char ulang;
	
	menu();
	cout<<"Apakah anda ingin mengulang (Y/N) = ";
	cin>>ulang;
	
	while(ulang == 'y' || ulang == 'Y'){
		cout<<"\n\n";
		menu();
		cout<<"Apakah anda ingin mengulang (Y/N) = ";
		cin>>ulang;
	}
	
	getche();
}
