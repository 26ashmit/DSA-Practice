#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr(5,23);
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    arr.push_back(5);
    arr.push_back(10);
    arr.pop_back();
    cout<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}