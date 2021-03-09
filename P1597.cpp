#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i+=5)
	{
		if(s[i] == 'a' && s[i + 3] == 'b')
		{ 
			a = b;
		}
		if(s[i] == 'b' && s[i + 3] == 'a')
		{ 
			b = a;
		}
		if(s[i] == 'a' && s[i + 3] == 'c')
		{
			a = c;
		}
		if(s[i] == 'c' && s[i + 3] == 'a')
		{
			c = a;
		}
		if(s[i] == 'b' && s[i + 3] == 'c')
		{
			b = c;
		}
		if(s[i] == 'c' && s[i + 3] == 'b')
		{
			c = b;
		}
		if(s[i] == 'a' && s[i + 3] >= '0' && s[i + 3] <= '9')
		{
			a = s[i + 3] - '0';
		}
		if(s[i] == 'b' && s[i + 3] >= '0' && s[i + 3] <= '9')
		{
			b = s[i + 3] - '0';
		}
		if(s[i] == 'c' && s[i + 3] >= '0' && s[i + 3] <= '9')
		{
			c = s[i + 3] - '0';
		}
	}
	cout << a << ' ' << b << ' ' << c << endl;
	return 0;
}


