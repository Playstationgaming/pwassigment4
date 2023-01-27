#include<iostream>
using namespace std;
int main()
{
int numb, i, j;
int j1=1 , j2=1, j3=0;
cout<<"Enter a +ve Integar : ";
cin>>numb;
i=3 ;
do
{
j1=1;
j2=1;
j=2;
do
{
if(i%j==0){
 j1=0;
 j=i;
}
j=2;
do
{
if((numb-i)%j==0){
 j2=0;
 j=numb-i;
}
j++;
}
while (j<numb-i );
    if(j1==1 && j2==1)
{
cout<<numb <<" = "<<i<<" + "<<numb-i<<endl;
j3=1;
}
j++;
}
while(j<i);
i++;
}
while(i<=numb/2);
if(j3==0){
cout<<numb<<" can not be expressed as sum of two prime numbers.";
}
}