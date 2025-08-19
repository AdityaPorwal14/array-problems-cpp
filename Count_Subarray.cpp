#include <iostream>
using namespace std;

int main() {
    int arr[] = {9, 4, 20, 3, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count = 0;   
    int k = 33;

    for(int i=0; i<size; i++) {
        int sum = 0;

        for(int j=i; j<size; j++) {
            sum += arr[j];

            if(sum == k) {
                count++;
            }                   
        }
    }

    cout << count;
}