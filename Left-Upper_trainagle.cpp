#include<iostream>
using namespace std;
/*int main(){
    int n=5;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<=(n+1)-i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
}*/
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}