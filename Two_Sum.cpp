class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash_table;
        
        for (int i = 0; i < nums.size(); i++){
            if (hash_table.find(target - nums[i]) == hash_table.end())
                hash_table[nums[i]] = i;
            else
                return {i, hash_table[target - nums[i]]};
        }
        return {};
    }
};
