#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class EditDistanceBetweenTwoStrings
{
	///------------------------------------------------------
/// The following algorithm is used in spelling checkersand correctors.
/// You are given two strings, X = $x_1x_2...x_m$ and Y = $y_1y_2...y_n$.
/// Define the edit distance between X and Y to be the minimum number of 
/// single character insertions, deletions, and replacements 
/// applied to X to make it equal to Y.
/// For example, if X = backache and Y = sackrace, then the edit distance is 3. 
/// The sequence of changes is :
/// •	Replace x_1 with  y_1('s')
/// •	Insert  y_5('r') after x_4
/// •	Delete x_7('h')
/// Give a dynamic programming algorithm that determines 
/// the minimum edit distance between X and Y.
private:
	int min(int x, int y, int z) { return std::min(x, std::min(y, z)); }
public:
	int EditDistance(string& X, string& Y);
};