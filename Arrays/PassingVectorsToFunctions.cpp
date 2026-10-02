#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> v){
    v[2]=9;

}
int main(){
    vector<int>v={2,4,1,3,6};
    change(v);
    cout<<v[2];
}