#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<i; j++){
            cout<<" ";
        }
         for(int j = 1; j<= 2*5 - (2 * i -1); j++){
            if(j == 1 || j == (2 * 5 - (2*i-1))|| i == 1 ){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
