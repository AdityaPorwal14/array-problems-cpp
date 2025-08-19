#include <iostream>
using namespace std;

int main() {
    int arr[] = {-2, 6, -3, -10, 0, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int answer=0;

    for(int i=0; i<size; i++) {
        int product = 1;
        for(int j=i; j<size; j++) {
            product = product * arr[j];
            answer = max(answer, product);
        }
    }

    cout << answer;
}