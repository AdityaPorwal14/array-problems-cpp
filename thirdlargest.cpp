#include <iostream>
using namespace std;

int main(){
    int firstmax = INT8_MIN;
    int secondmax = INT8_MIN;
    int thirdmax = INT8_MIN;

    int arr[6] = {2,5,8,9,6,4};
    
    for(int i=0; i<6; i++) {
        if(arr[i] >= firstmax) {
            firstmax = arr[i];
        }
    }

    for(int i=0; i<6; i++) {
        if(arr[i] != firstmax) {
            secondmax = max(secondmax,arr[i]);
        }
    }

    for(int i=0; i<6; i++) {
        if(arr[i] != firstmax and arr[i] != secondmax) {
            thirdmax = max(thirdmax,arr[i]);
        }
    }

    cout << "firstmax \n" << firstmax << "\nsecondmax \n" << secondmax << "\nthirdmax \n" << thirdmax << endl;
}