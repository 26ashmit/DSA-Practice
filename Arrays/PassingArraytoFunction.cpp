#include<iostream>
using namespace std;
void change(int x[]){
     x[0]=9;
}
int main(){
    int x[]={1,2,3,6};
    int n=sizeof(x)/4;
    change(x);
    cout<<x[0];

}