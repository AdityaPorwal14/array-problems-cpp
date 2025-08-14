#include <iostream>
using namespace std;

int main() {
    int arr[8] = {2,4,5,6,7,7,8,9};

    int temp = arr[7];

    for(int i = arr[8]-2; i>=0; i--){
        arr[i+1] = arr[i];
    }

    arr[0] = temp;

    for(int i=0; i<8; i++) {
        cout << arr[i] << " ";
    }
}