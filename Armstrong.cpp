#include <iostream>  
using namespace std;  
int main()  
{  
int n,r,top=0,tut;    
cout<<"Sayi giriniz=  ";    
cin>>n;  //1.53  3-15.3   27+125+1
tut=n;    
while(n>0)    
{    
r=n%10;    
top=top+(r*r*r);    
n=n/10;    
}    
if(tut==top)    
cout<<"Sayiniz Armstrong sayidir."<<endl;    
else    
cout<<"Sayiniz Armstrong sayi deðildir."<<endl;   
return 0;  
}  
