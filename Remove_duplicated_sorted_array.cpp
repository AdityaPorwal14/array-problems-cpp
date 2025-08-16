#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,2,3,4,4,4,5,5};
    int temp[10];
    int pos = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<n-1; i++) {
        if(arr[i] != arr[i+1]) {
            temp[pos++] = arr[i];
        }
    }

    temp[pos++] = arr[n-1];

    for(int i=0; i<pos; i++) {
        cout << temp[i];
    }
}