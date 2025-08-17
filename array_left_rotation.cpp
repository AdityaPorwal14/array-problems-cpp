#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int temp[10];
    int d = 2;

    for(int i = 0; i<d; i++) {
        if(d>size) {
            d = d%size;
        }

        temp[i] = arr[i];
    }

    for(int i=d; i<size; i++) {
        arr[i-d] = arr[i];
    }

    for(int i=0; i<d; i++) {
        arr[size-d+i] = temp[i];
    }

    for(int i=0; i<size; i++) {
        cout << arr[i];
    }

}