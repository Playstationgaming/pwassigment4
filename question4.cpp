#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse=0;
    while(n>0){
        int y;
        y=n%10;
        n=n/10;
        reverse=reverse*10+y;
    }
    cout<<reverse;
return 0;
}