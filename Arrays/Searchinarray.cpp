#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,2,6,5,6,6};
    int n=sizeof(arr)/4;
    int target=6;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"Element found.";
    }
    else{
        cout<<"Element not found.";
    }
}    