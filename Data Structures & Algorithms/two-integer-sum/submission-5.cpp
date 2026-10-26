class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    int nums_size = nums.size();

    std::unordered_map<int, int> difference_map;

    for (int i = 0; i < nums_size; i++) {
      int wanted = target - nums[i];

      std::unordered_map<int, int>::const_iterator it = difference_map.find(wanted);

      if (it != difference_map.end()) {
        return {it->second, i};
      }

      difference_map[nums[i]] = i;

      // If the smaller index of a duplicate is needed instead, we must emplace.
      // difference_map.emplace(nums[i], i);
    }

    return {-1, -1};
  }
};
