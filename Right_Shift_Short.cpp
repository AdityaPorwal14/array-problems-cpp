#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i-1])
            return false;
    }
    return true;
}

int main() {
    int arr[] = {3, 4, 5, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int r = 0; r < size; r++) {
        if (isSorted(arr, size)) {
            cout << count;
            return 0;
        }

        int temp = arr[size-1];

        for (int j = size-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }

        arr[0] = temp;
        count++;
    }

    cout << -1;
    return 0;
}
