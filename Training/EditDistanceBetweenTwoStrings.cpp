#include "EditDistanceBetweenTwoStrings.h"

int EditDistanceBetweenTwoStrings::EditDistance(string& X, string& Y)
{
	vector<vector<int>> matrix(Y.length() + 1);
	for (uint32_t i = 0; i <= X.length(); i++)
		matrix[0].push_back(i);
	for (uint32_t i = 1; i < matrix.size(); i++)
	{
		matrix[i].push_back(i);
		for (uint32_t j = 1; j <= X.length(); j++)
		{
			if (Y[i - 1] == X[j - 1])
				matrix[i].push_back(matrix[i - 1][j - 1]);
			else
				matrix[i].push_back(min(matrix[i - 1][j - 1], matrix[i - 1][j], matrix[i][j - 1]) + 1);
		}
	}

	return matrix[Y.length()][X.length()];

}
