#include "ValidParenheses20.h"

bool ValidParenheses20::isValid(string s)
{
	stack<char> st;
	bool flag = true;
	for (uint16_t i = 0; i < s.size(); i++)
	{
		switch (s[i])
		{
		case '(':
			st.push('(');
			flag = false;
			break;
		case '[':
			st.push('[');
			flag = false;
			break;
		case '{':
			st.push('{');
			flag = false;
			break;
		case '}':
			if (st.size() == 0) return false;
			if (st.top() == '{') st.pop();
			else return false;
			break;
		case ']':
			if (st.size() == 0) return false;
			if (st.top() == '[') st.pop();
			else return false;
			break;
		case ')':
			if (st.size() == 0) return false;
			if (st.top() == '(') st.pop();
			else return false;
			break;
		default:
			break;
		}
	}
	if (st.size() == 0) return true;
	else return false;
}

bool ValidParenheses20::isValidTest(string str)
{
	if (isValid(str))
		return true;
	return false;
}
