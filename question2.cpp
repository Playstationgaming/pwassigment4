#include<iostream>
using namespace std;
int main(){
    for(int i=100;i<=500;i++){
        int t=i;
        int sum=0;

       while(t>0){
        sum+=(t%10)*(t%10)*(t%10);
        t=t/10;


       }
       if(sum==i){
        cout<<i<<endl;
       }
    }
return 0;
}