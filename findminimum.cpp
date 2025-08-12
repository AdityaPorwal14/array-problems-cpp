#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2,3,5,6,7};
    
    int ans = INT16_MAX;
    for(int i=0; i<5; i++) {
        if(arr[i] < ans) {
            ans = arr[i];
        }
    } 

    cout << "Min: " << ans;


}