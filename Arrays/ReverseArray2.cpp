#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    for(int ele: v) cout<<ele<<" ";
    cout<<endl;
}
int main(){
    vector<int>v={1,2,4,3,5};
    print(v);
    int i=0,j=v.size()-1,temp;
    while(i<j){
        temp=v[i];  //This is the 2 pointer approach.
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    print(v);
}