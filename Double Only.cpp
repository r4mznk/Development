#include<iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
int y;
int sayi;
while(1){
	jump:
cout<<"Say� giriniz :";
cin>>sayi;
if(sayi%2==1){
	cout<<"say�n�z tektir \n";}
else if(sayi%2==0){
	cout<<"say�n�z �ifttir \n";
break;
}}
return 0; }

