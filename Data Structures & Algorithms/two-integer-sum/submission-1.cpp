class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int nums_size = nums.size();

        for (int i = 0; i < nums_size - 1; i++) {
            int wanted = target - nums[i];

            for (int j = i + 1; j < nums_size; j++) {
                if (nums[j] == wanted) {
                    return {i, j};
                }
            }
        }

        return {-1, -1};
    }
};
