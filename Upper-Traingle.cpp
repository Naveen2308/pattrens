#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<n - i -1; j++){
            cout<<" ";
        }
        for(int j = 1; j<=(2 * i + 1); j++){
            if(j == 1 || j == (2*i+1) || i == n-1){
                cout<<j;
            }
            else{
                cout<<" ";
            }
           
        }
        
        cout<<endl;
    }
}