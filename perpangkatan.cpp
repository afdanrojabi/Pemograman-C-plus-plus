#include<iostream>
#include<conio.h>

/*
Nama : Muhammad Afdan Rojabi
NIM : J3C114066
*/

using namespace std;
main()
{
	float x, y;
	
	cout<<"Masukan nilai 1-100 = ";
	cin>>x;
	
	if(x>0 && x<=100){
		y = x*x;
		cout<<"hasil pangkat "<<x<<" adalah "<<y;
	}
	else
		cout<<"Anda memasukan nilai salah";
		
	getche();
	return 0;
}
