#include <iostream>
using namespace std;

int main(){
    int arr[] = {4,3,6,2,1,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp[100];
    int pos = 0;
    int sum = 0;
    int totalNumber = size * (size+1) / 2;

    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[i] == arr[j]) {
                temp[pos++] = arr[j];
                arr[j] = 0;
            }
        }
    }

    for(int i=0; i<size; i++) {
        sum+=arr[i];
    }

    temp[pos++] = (totalNumber - sum);

    for(int i = 0; i < pos; i++) {
        cout <<temp[i] << " ";
    }
}