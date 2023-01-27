#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter input ";
    cin>>n;
    int sum=0;
    while(n>0){
        sum+=n;

        n--;
    }
    cout<<sum<<endl;

return 0;
}