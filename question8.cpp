#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int y1;
int y2;
int y3;
int Number=3;
int var=0;
cout<<"Please enter the no of lines ";
cin>> y1;
int d= y1;
for(y2=1;y2<= y1; y2++){
for(int e=1;e<=d;e++){
cout<<" ";
}
if(y2==1){
cout<<"2\n";
}
else{
for(y3=0; y3!= y2;)
{
var=0;
for ( int k=2;k<Number;k++)
{
if((Number%k)==0)
var=1;
}
if(var==0)
{ y3++;
cout<<Number<<" ";
}
Number++;
}
cout<<endl;
}
d--;
}
getch();
return 0;
}