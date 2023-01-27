#include<iostream>
using namespace std;
int main(){
    int n,y;
    cout<<"Please Enter the number of StarRows:"<<endl;
    cin>>n;
        cout<<"Please Enter the number of StarRows:"<<endl;
        cin>>y;
        for(int i=0;i<n;i++){
            for(int j=0;j<y;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    
return 0;
}