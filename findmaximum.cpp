#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,5,78,66,90};

    int ans = INT8_MIN;
    for(int i=0; i<5; i++) {
        if(arr[i] > ans){
            ans = arr[i];
        }
    }

    cout << "Max: " <<ans;
}