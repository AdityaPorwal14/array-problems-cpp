#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int temp[10];
    int d = 2;

    for(int i=0; i<d; i++) {
        int first = arr[0];

        for(int j=0; j<size; j++) {
            arr[j] = arr[j+1];
        }

        arr[size-1] = first;
    }

    for(int i=0; i<size; i++) {
        cout << arr[i];
    }

}