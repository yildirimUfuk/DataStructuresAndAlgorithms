#include "LongestPalindromicSubstring.h"

string LongestPalindromicSubstring::longestPalindrome(string s)
{
	//if (s.size() <= 1) return s;
	int left, right, tmpI, tmpJ;
	int maxLeft = 0;
	int maxRight = 0;
	bool flag = true;
	for (int16_t i = s.length()-1; i >= 0; i--)
	{
		for (uint16_t j = 0; j < i; j++)
		{
			if (s[j] == s[i])
			{
				flag = true;
				tmpI = i;
				tmpJ = j;
				while (tmpJ<=tmpI)
				{
					if (s[tmpJ] != s[tmpI]) { flag = false; break; }
					tmpJ++;
					tmpI--;
				}
				if (flag == true &&(maxRight-maxLeft)<(i-j)) 
				{
					maxRight = i;
					maxLeft = j;
				}
			}
		}
	}
	s.erase(maxRight+1, s.size());
	s.erase(0, maxLeft);
    return s;
}



string LongestPalindromicSubstring::longestPalindrome2(string str)
{
    int n = str.size(); 
    bool **table = new bool*[n];
    for (size_t i = 0; i < n; i++)
        table[i] = new bool[n];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
            table[i][j] = 0;
    }
    int maxLength = 1;
    for (int i = 0; i < n; ++i)
        table[i][i] = true;
    int start = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (str[i] == str[i + 1]) {
            table[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }
    for (int k = 3; k <= n; ++k) {
        for (int i = 0; i < n - k + 1; ++i) {
            int j = i + k - 1;
            if (table[i + 1][j - 1] && str[i] == str[j]) {
                table[i][j] = true;
                if (k > maxLength) {
                    start = i;
                    maxLength = k;
                }
            }

            
        }
    }
    return str.substr(start, maxLength);
}
