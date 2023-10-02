#include<iostream>
using namespace std;
int main(){
    int n=5;
    int m=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<m;
            m++;
        }
        for(int j=-2;j<(2*4)-2*i;j++){
            cout<<" ";
        }
        
        for(int j=1;j<i;j++){
            m--;
            cout<<m;
            
        }
        cout<<endl;
    }
}