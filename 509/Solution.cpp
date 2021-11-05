#include "../Morningstar.h"

class Solution {
public:
    int fib(int n);
};

int Solution::fib(int n)
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