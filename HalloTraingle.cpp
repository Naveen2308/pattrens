#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i+1;k++){
            if(k == 1  || i == n-1){
                cout<<k<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        for(int l=1;l<=i;l++){
            if(l == i || i == n-1){
                cout<<l+2<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}