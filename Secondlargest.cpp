#include <iostream>
using namespace std;

int main() {
    int arr[7] = {2,6,4,3,8,5,1};

    int secondlargest = INT16_MIN;
    int largest = INT16_MIN;

    for(int i=0; i<7; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    for(int i=0; i<7; i++){
            if(largest != arr[i]){
                secondlargest = max(secondlargest,arr[i]);
            }
        }

        cout << secondlargest;
}