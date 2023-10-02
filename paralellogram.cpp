#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int l=1;l<n+1;l++){
            cout<<l<<" ";
        }
        cout<<endl;
    }

}