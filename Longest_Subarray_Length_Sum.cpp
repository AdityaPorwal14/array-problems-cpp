#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 2, 7, 1, -10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int length = 0;   
    int k = 15;

    for(int i=0; i<size; i++) {
        int sum = 0;

        for(int j=i; j<size; j++) {
            sum += arr[j];

            if(sum == k) {
                length = max(length,j+1);           
            }                   
        }
    }

    cout << length << endl;
}