#include "reverseString.h"

void reverseString::reverseString1(vector<char>& s)
{
	if (s.size() == 0) return;
	char c = s.front();
	s.erase(s.begin());
	reverseString(s);
	s.push_back(c);
}
