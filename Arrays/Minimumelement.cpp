#include<iostream>
using namespace std;
int main(){
    int arr[]={1,34,23,67,44,12};
    int n=sizeof(arr)/4;
    int mn=INT8_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mn){
            mn=arr[i];
        }
    }
    cout<<"Minimum: "<<mn;
}