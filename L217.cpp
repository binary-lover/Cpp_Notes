
#include <iostream>
#include <vector>
#include <unordered_map> // Include the unordered_map header

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;
        for (int num : nums) {
            if (seen[num] >= 1)
                return true;
            seen[num]++;
        }
        return false;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    bool result = solution.containsDuplicate(nums);
    cout << boolalpha << result;

    return 0;
}