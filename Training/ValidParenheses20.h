#pragma once
#include<iostream>
#include<stack>
using namespace std;
//Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
//An input string is valid if:
//Open brackets must be closed by the same type of brackets.
//Open brackets must be closed in the correct order.
//Note that an empty string is also considered valid.
//Example 4:
//	Input: "([)]"
//	Output : false
//Example 5 :
//	Input : "{[]}"
//	Output : true
class ValidParenheses20
{
public:
	/// <summary>
/// 76 / 76 test cases passed.
/// Runtime : 0 ms / Memory Usage : 7.8 MB
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
	bool isValid(string s);
	bool isValidTest(string str);
};

