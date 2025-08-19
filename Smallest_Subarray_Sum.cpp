#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 10, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int length = INT8_MAX;   
    int k = 12;

    for(int i=0; i<size; i++) {
        int sum = 0;

        for(int j=i; j<size; j++) {
            sum += arr[j];

            if(sum == k) {
                length = min(length, j-i+1);           
            }                   
        }
    }

    cout << length << endl;
}