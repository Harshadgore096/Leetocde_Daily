class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um; // value -> index

        for (int i = 0; i < (int)nums.size(); ++i) {
            int diff = target - nums[i];

            // Check if the complement exists
            auto it = um.find(diff);
            (it != um.end()) {
                // Found: indices of the complement and current
                return {it->second, i};
            }

            // Otherwise, store current value's index
            um[nums[i]] = i;
        }

        // If no solution is found (problem statement usually guarantees one)
        return {};
    }
};
