#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,4,5,6,7,7,8,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 7;
    bool found = false;

    for(int i=0; i<size; i++) {

        if(arr[i] == target) {
            cout << i << endl;
            found = true;
            break;
        }
    } 

    if(!found) {
        cout << "target not found" << endl;
    }
    
}