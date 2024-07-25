
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> numIndexMap; // Maps numbers to their latest indices
        
        for (int i = 0; i < nums.size(); i++) {
            if (numIndexMap.find(nums[i]) != numIndexMap.end()) { // Check if nums[i] has been seen before
                if (i - numIndexMap[nums[i]] <= k) { // Check the distance between current and previous index
                    return true; // If the distance is <= k, return true
                }
            }
            numIndexMap[nums[i]] = i; 
        }
        
        return false;
    }
};
