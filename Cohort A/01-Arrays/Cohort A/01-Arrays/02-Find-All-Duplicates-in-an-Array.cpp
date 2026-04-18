COMPLEXITY:
- Time Complexity: O(N) - We iterate through the array exactly once.
- Space Complexity: O(1) - We only modify the input array in place (ignoring the output array).
========================================================================================
*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        // TC => O(n)
        // SC => O(1)
        for (int i = 0; i < nums.size(); i++) {
            int val = abs(nums[i]);
            int targetIndex = val - 1;

            if (nums[targetIndex] < 0) {
                ans.push_back(val);
            }

            nums[targetIndex] = -nums[targetIndex];
        }
        return ans;
    }
};
