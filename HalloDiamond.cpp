#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=1;j<(n-i);j++){
            cout<<" ";
        }
        for(int k=0;k<(2*i+1);k++){
            if((k == 0)||(k == (2*i+1)-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<(2*5-(2*i+1));k++){
            if((k == 0)||(k == (2*5 - (2*i+1)-1))){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}