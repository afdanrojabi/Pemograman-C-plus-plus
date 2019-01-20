#include <iostream>

#include <conio.h>

#include <string.h>

#include <math.h>

/*
Nama : Muhammad Afdan Rojabi
NIM : J3C114066
*/

using namespace std;
int a,b,o=0;

void input()

{

     cout<<"masukkan nilai a = ";cin>>a;

     cout<<"masukkan nilai b = ";cin>>b;

}

float tambah(float nil1, float nil2)

{

            float a, b, c;

            a=(nil1);

            b=(nil2);

            c=a+b;

            return (c);

}

float kurang(float nil1, float nil2)

{

            float a, b, c;

            a=(nil1);

            b=(nil2);

            c=a-b;

            return (c);

}

float kali(float nil1, float nil2)

{

            float a, b, c;

            a=(nil1);

            b=(nil2);

            c=a*b;

            return (c);

}

float bagi(float nil1, float nil2)

{

            double a, b, c;

            a=(nil1);

            b=(nil2);

            c=a/b;

            return (c);

}

float trigeo(float nil1, float nil2)

{

            cout<<"sin "<<nil1<<" = "<<sin (nil1)<<endl;

   cout<<"cos "<<nil1<<" = "<<cos (nil1)<<endl;

   cout<<"tan "<<nil1<<" = "<<tan (nil1)<<endl;

   cout<<"sin "<<nil2<<" = "<<sin (nil2)<<endl;

   cout<<"cos "<<nil2<<" = "<<cos (nil2)<<endl;

   cout<<"tan "<<nil2<<" = "<<tan (nil2)<<endl;

   return(0);

}

 

int output ()

{   int hasil, pilihan;

 

    cout<<"1. penjumlahan"<<endl;

    cout<<"2. pengurangan"<<endl;

    cout<<"3. perkalian"<<endl;

    cout<<"4. pembagian"<<endl;

    cout<<"5. trigonometri"<<endl;

    cout<<"masukan pilihan proses =";

    cin>>pilihan;

    switch (pilihan)

    {

           case 1 :

                hasil=tambah(a,b);

                cout<<"hasil= "<<hasil<<endl;

           break;

           case 2 :

                hasil=kurang(a,b);

                cout<<"hasil= "<<hasil<<endl;

           break;

           case 3 :

                hasil=kali(a,b);

                cout<<"hasil= "<<hasil<<endl;

           break;

           case 4 :

                hasil=bagi(a,b);

                cout<<"hasil= "<<hasil<<endl;

           break;

           case 5 :

                hasil=trigeo(a,b);

 

           break;

           default:

            cout<<"inputan salah"<<endl;

           o=1;

            break;

    }

return(hasil);

}

int main()

{

            char ulang='t';

            do{

    input();

    int f;

    f=output();

    do

    {

    if(!((ulang=='y')||(ulang=='Y')||(ulang=='t')||(ulang=='T'))){

            cout<<"anda error"<<endl;

    }

    cout<<"apakah anda ingin mengulang = "<<endl;cin>>ulang;

    } while(!((ulang=='y')||(ulang=='Y')||(ulang=='t')||(ulang=='T')));

    }

    while((ulang=='y')||(ulang=='Y'));

    getch();

}
