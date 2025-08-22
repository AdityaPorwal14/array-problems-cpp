#include <iostream>
using namespace std;

int main() {
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp1[20];
    int temp2[20];
    int result[20];
    int pos = 0;
    int neg = 0;
    int incr=0;

    for(int i=0; i<size; i++){
        if(arr[i] >= 0) {
            temp1[pos++] = arr[i];
        }

        else {
            temp2[neg++] = arr[i];
        }

    }

    int posindex=0, negindex = 0;

    for(int i=0; i<size; i++) {
        while(posindex < pos && negindex < neg) {
            result[incr++] = temp1[posindex++];
            result[incr++] = temp2[negindex++];
        }

        while(posindex < pos) {
            result[incr++] = temp1[posindex++];
        }

        while(negindex < neg) {
            result[incr++] = temp2[negindex++];
        }

    }

    for(int i=0; i<size; i++) {
        cout << result[i]<<" ";
    }
}
