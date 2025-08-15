#include <iostream>
#include <algorithm>
using namespace std;

void sortArray(int arr[], int size) {
    sort(arr, arr + size);
}

int main() {
    int thirdlargest = INT8_MIN;
    int arr[] = {2,5,9,8,6,4};

    int size = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr,size);


    thirdlargest = arr[size-3];
    cout << "thirdlargest" << thirdlargest;

}