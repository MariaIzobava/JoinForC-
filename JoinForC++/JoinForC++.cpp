// JoinForC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <set>

template <typename T>
std::string join(T begin, T const & end, std::string const & separator) {
	std::stringstream ss;
	if (begin != end) {
		ss << *begin;
		++begin;
		for (; begin != end; ++begin) {
			ss << separator << *begin;
		}
	}
	//while () {}
	
	return ss.str();
}


int main()
{
	std::vector<int> a = { 3, 5, 12, 23, 5 };
	std::cout << join(std::begin(a), std::end(a), ", ") << std::endl;
	
	std::set<std::string> b = { "3", "5", "12", "23", "5", "abacaba" };
	std::cout << join(std::begin(b), std::end(b), "; ") << std::endl;

	std::set<std::string> c = {};
	std::cout << join(std::begin(c), std::end(c), "; ") << std::endl;

	std::set<std::string> d = {5};
	std::cout << join(std::begin(d), std::end(d), "; ") << std::endl;

	getchar();
}
