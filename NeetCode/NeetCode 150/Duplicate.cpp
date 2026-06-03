#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        
        for (int i = 0; i < nums.size(); i++) {
            if (seen.find(nums[i]) != seen.end()) {
                return true;
            }
            seen.insert(nums[i]);
        }
        
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> test1 = {1, 2, 3, 1};
    vector<int> test2 = {1, 2, 3, 4};
    vector<int> test3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    cout << boolalpha;
    cout << "Test 1: " << sol.hasDuplicate(test1) << " (Expected: true)" << endl;
    cout << "Test 2: " << sol.hasDuplicate(test2) << " (Expected: false)" << endl;
    cout << "Test 3: " << sol.hasDuplicate(test3) << " (Expected: true)" << endl;

    return 0;
}
