#ifndef LEETCODE_H
#define LEETCODE_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

namespace lc
{
	namespace Solution
	{
		auto fib(int n) -> int;
		auto getMaximumGenerated(int n) -> int;
		auto strStr(std::string haystack, std::string needle) -> int;
	};

	inline void print(std::string p) { std::cout << p << std::endl; }
	inline void print(int p) { std::cout << p << std::endl; }
	inline void print(int p[]) { std::cout << p << std::endl; }
	inline void print(double p) { std::cout << p << std::endl; }
	inline void print(float p) { std::cout << p << std::endl; }
	inline void print(char p) { std::cout << p; }
	inline void print(const char* p) { std::cout << p << std::endl; }
	inline void print(unsigned long long p) { std::cout << p << std::endl; }
	inline void print(unsigned long p) { std::cout << p << std::endl; }
	inline void print(long long p) { std::cout << p << std::endl; }
	inline void print(long p) { std::cout << p << std::endl; }
	inline void print(std::vector<int> p) { for (auto i:p) std::cout << i << std::endl;}
	inline void print(std::vector<long int> p) { for (auto i : p) std::cout << i << std::endl; }
	inline void print(std::vector<double> p) { for (auto i : p) std::cout << i << std::endl; }
	inline void print(std::vector<float> p) { for (auto i : p) std::cout << i << std::endl; }
	template<class T> inline auto print(T p) { for (auto i : p) std::cout << i << std::endl; }
}

#endif