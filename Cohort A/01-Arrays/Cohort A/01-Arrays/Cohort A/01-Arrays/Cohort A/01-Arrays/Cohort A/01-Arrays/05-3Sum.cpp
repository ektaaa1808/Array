COMPLEXITY:
- Time Complexity: O(N * log N) for sorting + O(N^2) for the nested loops = O(N^2).
- Space Complexity: O(1).
========================================================================================
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;

        sort(nums.begin(), nums.end());
        int n = nums.size();
        // TC => O(n * logn)
        // SC => O(1)
        for (int i = 0; i < n; i++) {
            int left = i + 1, right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum < 0) left++;

                else if (sum > 0) right--;

                else {
                    vector<int> temp = {nums[i], nums[left], nums[right]};
                    st.insert(temp);
                    left++;
                    right--;
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};
