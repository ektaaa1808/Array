COMPLEXITY:
- Time Complexity: O(N) - Each line is evaluated at most once.
- Space Complexity: O(1)
========================================================================================
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;
        // TC => O(n)
        // SC => O(1)
        while (left < right) {
            int width = right - left;
            int minHeight = min(height[left], height[right]);

            int currArea = width * minHeight;
            maxArea = max(maxArea, currArea);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxArea;
    }
};
