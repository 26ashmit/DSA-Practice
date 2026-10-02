#include <iostream>
#include <vector>
using namespace std;

void segregate0and1(vector<int> &arr) {
    int i = 0;
    int j = arr.size() - 1;

    while(i < j) {
        if(arr[i] == 0)
            i++;

        else if(arr[j] == 1)
            j--;

        else if(arr[i] == 1 && arr[j] == 0) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 1, 1, 0, 1, 0};

    segregate0and1(arr);

    cout << "Array after segregation: ";

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}    //     // code here
     //    METHOD 2
    //     int temp;
    //     int n=arr.size();
    //     int zeroes=0;
    //     int ones=0;
    //     for(int i=0;i<n;i++){
    //         if(arr[i]==0) zeroes+=1;
    //         else ones+=1;
    //     }
    //     for(int i=0;i<zeroes;i++){
    //         arr[i]=0;
    //     }
    //     for(int i=zeroes;i<(n);i++){
    //         arr[i]=1;
    //     }
        