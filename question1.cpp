#include<iostream>
using namespace std;
void factorial(int n){
    int product=1;
    for(int i=1;i<=n;i++){
product*=i;
    }
    cout<< product;
}
int main(){
 int n;
 cout<<"enter the input ";
 cin>>n;   
 factorial(n);
return 0;
}