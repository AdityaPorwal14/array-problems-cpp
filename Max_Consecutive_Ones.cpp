#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,1,0,1,1,1};
    int res = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

        int count = 0;
        for(int i=0; i<size; i++) {
            if(arr[i] == 1) {
                count++;
                res = max(res,count);
            } else {
                count = 0;
            }
        }

    cout << res;

}