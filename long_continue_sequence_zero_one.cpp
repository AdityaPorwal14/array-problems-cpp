#include <iostream>
using namespace std;

int main() {
    int arr[] = {0,0,0,0,0,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 1;
    int i=0, j=1;

    while(i<size) {
        if(arr[i] == arr[j]) {
            count++;
        }

        i++;
        j++;
    }

    cout << count << endl;
}