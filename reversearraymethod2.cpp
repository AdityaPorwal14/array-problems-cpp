#include <iostream>
using namespace std;

int main() {
    int arr[6]  {6,8,14,11,3,9};

    int start = 0; 
    int end = 5;

    while(start<end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    };

    for(int i=0; i<6; i++) {
        cout << arr[i] << " ";
    }
}