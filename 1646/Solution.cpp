#include "../LeetCode.h"
using namespace lc;

auto Solution::getMaximumGenerated(int n) -> int
{
    std::vector<int> nums;
    int max = (n - 1) / 2;
    nums.push_back(0);
    for (int i = 1; i <= n; i++) nums.push_back(1);
    for (int i = 1; i <= max; i++)
    {
        nums[2 * i] = nums[i];
        nums[2 * i + 1] = nums[i] + nums[i + 1];
    }
    return *max_element(nums.begin(),nums.end());
}