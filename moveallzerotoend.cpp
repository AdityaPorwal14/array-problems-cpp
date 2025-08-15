#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,0,4,3,0,5,0};
    int temp[8];
    int pos = 0;

    for(int i=0; i<8; i++) {
        if(arr[i]!=0) {
            temp[pos++] = arr[i];
        }
    }

    while(pos<8) {
        temp[pos++] = 0; 

    }

    for(int i=0; i<8; i++) {
        cout << temp[i];
    }
}