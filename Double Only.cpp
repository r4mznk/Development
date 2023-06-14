#include<iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
int y;
int sayi;
while(1){
	jump:
cout<<"Sayý giriniz :";
cin>>sayi;
if(sayi%2==1){
	cout<<"sayýnýz tektir \n";}
else if(sayi%2==0){
	cout<<"sayýnýz çifttir \n";
break;
}}
return 0; }

