#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<5-i;j++){
            cout<<"*";
        }
        for(int j=0;j<(2*i+1);j++){
            cout<<" ";
        }
        for(int j=0;j<(n-i);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<2*5-(2*i+1);j++){
            cout<<" ";
        }
        for(int j=0;j<(i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}