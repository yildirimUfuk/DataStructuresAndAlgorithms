#include "rotateImage.h"

void rotateImage::rotate(std::vector<std::vector<int>>& matrix)
{
	for (uint16_t i = 0; i < matrix.size(); i++)
	{
		for (size_t j = i + 1; j < matrix[i].size(); j++)
		{
			/*a= matrix[i][j]
			b= matrix[j][i]*/
			matrix[i][j] = matrix[i][j] ^ matrix[j][i];
			matrix[j][i] = matrix[i][j] ^ matrix[j][i];
			matrix[i][j] = matrix[i][j] ^ matrix[j][i];
		}
	}

	for (size_t i = 0; i < matrix.size(); i++)
	{
		uint16_t left = 0, right = matrix[i].size() - 1, j = 0;
		while (left < right)
		{
			matrix[i][left] = matrix[i][left] ^ matrix[i][right];
			matrix[i][right] = matrix[i][left] ^ matrix[i][right];
			matrix[i][left] = matrix[i][left] ^ matrix[i][right];
			left++; right--;
		}
	}
}
