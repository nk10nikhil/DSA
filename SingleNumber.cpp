#include <iostream>
#include <vector>
using namespace std;


int singleNumber(vector<int>& nums) {
    int ans = 0;
    for (auto x : nums) {
        ans ^= x;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = singleNumber(nums);
    cout << "The single number is: " << result << endl;

    return 0;
}
