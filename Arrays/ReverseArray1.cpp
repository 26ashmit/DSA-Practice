#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,4,3,5};
    int n=v.size();
    for(int i=0;i<n/2;i++){
        int temp=v[i];
        v[i]=v[n-i-1];
        v[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}