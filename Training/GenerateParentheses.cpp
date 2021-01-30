#include "GenerateParentheses.h"

void GenerateParentheses::findPath(int left, int right, std::string parentheses, std::vector < std::string> &solution)
{
    if (left == 0 && right == 0){
        solution.push_back(parentheses);
        return;
    }
    if (left > 0)
        findPath(left - 1, right, parentheses + '(',solution);
    if (right > left)
        findPath(left, right - 1, parentheses + ')',solution);
}

std::vector<std::string> GenerateParentheses::generateParenthesis(int n)
{
    std::vector<std::string>solution;
    findPath(n, n,"",solution);
    return solution;
}
