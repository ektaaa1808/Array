COMPLEXITY:
- Time Complexity: O(M) - We loop through the list of arrays exactly once.
- Space Complexity: O(1)
========================================================================================
*/

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int globalMin = arrays[0].front();
        int globalMax = arrays[0].back();
        int maxDist = 0;

        for (int i = 1; i < arrays.size(); i++) {
            int currMin = arrays[i].front(); 
            int currMax = arrays[i].back();

            maxDist = max(maxDist, abs(currMax - globalMin));
            maxDist = max(maxDist, abs(globalMax - currMin));

            // int dist1 = abs(currMax - globalMin);
            // int dist2 = abs(globalMax - currMin);
            // maxDist = max(maxDist, max(dist1, dist2));

            globalMin = min(globalMin, currMin);
            globalMax = max(globalMax, currMax);
        }
        return maxDist;
    }
};
