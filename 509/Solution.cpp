#include "../LeetCode.h"
using namespace lc;

auto Solution::fib(int n) -> int
{
    if(n < 1) return n;
    std::vector<int> acci;
    acci.push_back(0);
    acci.push_back(1);
    for(int i = 2; i <= n; i++)
    {
        acci.push_back(acci[i-1] + acci[i-2]);
    }
    return acci[acci.size()-1];
}