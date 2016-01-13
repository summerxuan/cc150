#include <iostream>
#include <string>
bool isRotation(string s1, string s2)
{
	if(s1.length() != s2.length())
		return false
	else
	{
		string s = s1+s1;
		return isSubstring(s,s2);
	}
}