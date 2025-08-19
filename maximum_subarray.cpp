#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int currentsum = arr[0];
    int maxsum = arr[0];

    for(int i=1; i<size; i++) {
            currentsum = max(arr[i], currentsum + arr[i]);
            maxsum = max(maxsum,currentsum);
        }

        cout << maxsum << endl;

    }
