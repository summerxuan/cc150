#include <iostream>
#include <cstring>
using namespace std;

bool isUnique(string s)
{
	int check[256];
	for(int i = 0;i<s.length();i++)
	{
		int t = (int)s[i];
		if(check[i] == 1)
			return false;
		else
			check[i]=1;
	}
	return true;
}

int main()
{
	string g = "abcdefghijklmnopqrstuvwxyz";
	cout << isUnique(g) << endl;
}