#include <bits/stdc++.h>

using namespace std;
int FindTriplets(vector<int> a,int n){
    int index=*max_element(a.begin(),a.end());
    vector<int> index_i(index, 0);
    int count=0;
    for(int i=0;i<n;i++){
        index_i[a[i]]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(index_i[a[i]+a[j]] == 1){
                cout<<a[i]<<","<<a[j]<<endl;
                count+=1;
            }
        }
    }
    return count;
}
int main(){
    int n,x;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    vector<int> a;
    cout<<"enter the elemnts:"<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    
    cout<<"No . triplets are: "<<endl<< FindTriplets(a,n)<<endl;
}