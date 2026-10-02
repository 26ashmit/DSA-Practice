#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,78,53,90};
    int n=sizeof(arr)/4;
    cout<<"Elements are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}