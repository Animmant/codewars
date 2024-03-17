#include <vector>

std::vector<int> pipe_fix(const std::vector<int>& nums) {
  std::vector<int> result;
    for (int i = nums[0]; i <= nums.back(); i++) {
        result.push_back(i);
    }
    return result;
}

