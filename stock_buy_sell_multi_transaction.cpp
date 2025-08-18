#include <iostream>
using namespace std;

int main() {
    int arr[] = {100,180,260,310,40,535,695};
    int size = sizeof(arr) / sizeof(arr[0]);
    

    int buy=arr[0],sell=0,profit2=0;

    for(int i=0; i<size-1; i++){
        
        if(arr[i] < arr[i+1]) {
            buy = min(buy, arr[i]);
            sell += max(0, arr[i+1] - arr[i]);
        }

    }

    cout << "total profit is: " << sell << endl;
    return 0;
}