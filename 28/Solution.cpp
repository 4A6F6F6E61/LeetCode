#include "../LeetCode.h"
using namespace lc;

auto Solution::strStr(std::string haystack, std::string needle) -> int
{
    if (haystack.size() == 0) return 0;
    int tmp = 0, first = 0;
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle[0])
        {
            first = i;
            for (int y = 1; y < needle.size(); y++)
            {
                if (haystack[i + y] == needle[y])
                {
                    tmp++;
                    std::cout << y + 1 << std::endl;
                }
                else
                {
                    std::cout << first;
                    first = 0;
                    continue;
                }
            }
        }
    }
    return first;
}