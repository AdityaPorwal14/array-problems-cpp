#include <iostream>
using namespace std;

int main() {
    int result = 0;
    int arr[] = {1,3,6,9,11};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            result = max(result, arr[j] - arr[i]);
        }
    }

    cout << result;

    
}