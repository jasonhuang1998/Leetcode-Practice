class Solution {
public:
    int bsearch(vector<int>& nums, int start, int end, int target){
        int middle = start + (end - start) / 2;
        if (start == end)
            return (nums[middle] == target)?middle:-1;
        if(nums[middle] > target)
            return bsearch(nums, start, middle, target);
        else if (nums[middle] < target)
            return bsearch(nums, middle + 1, end, target);
        else
            return middle;
    }
    int search(vector<int>& nums, int target) {
        return bsearch(nums, 0, nums.size() - 1, target);
    }
};
