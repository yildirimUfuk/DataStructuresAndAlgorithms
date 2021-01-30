#pragma once
#include<iostream>
#include<vector>
#include<stack>
class GenerateParentheses
{
private:
    void findPath(int left,int right,std::string parentheses,std::vector<std::string>&solution);
public:
    std::vector<std::string> generateParenthesis(int n);
};

