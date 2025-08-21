#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 1, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int countone = 0;
    for(int i = 0 ; i < size; i++) {
        if(arr[i]) {
            countone ++;
        }

        if(countone == 0) {
            return -1;
        }
    }

    int minswap = INT16_MAX;

    for(int i = 0; i<size-countone; i++) {
        int one = 0;

        for(int j = i; j < i+countone; j++) {
            if(arr[j]) {
                one ++;
            }
        }

        minswap = min(minswap,(countone - one));
    }

    cout << minswap << endl;
}