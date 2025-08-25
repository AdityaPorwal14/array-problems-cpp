#include <iostream>
#include <vector>

using namespace std;

int main() {
    int ans = 0;
    vector <int> nums = {2,2,1,1,3};

    for(int val : nums) {
        ans = ans ^ val;
    }

    cout << ans;
}