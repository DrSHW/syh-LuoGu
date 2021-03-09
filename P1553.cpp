#include<bits/stdc++.h>

using namespace std;

string s;

int main()
{
	cin >> s;
	int key = 1, t = 0;
	for(int i = 0; i < s.length(); i++)
	{
		if(s[s.length() - 1] == '%')
			key = 4;
		if(s[i] == '/') 
			key = 3;
		if(s[i] == '.')
			key = 2;
	}
	if(key == 1)
	{
		for(int i = s.length() - 1; i >= 0; i--)
		{
			if(!(s[i] - '0'))
				t++;
			else
				break;
		}
		if(t == s.length())
			cout << '0';
		else
		{
			for(int i = s.length() - t - 1; i >= 0; i--)
			{
				cout << s[i];
			}
		}
		t = 0;
	}
	if(key == 2)
	{
		char s1[20];
		char s2[20];
		int sign = 0;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] != '.')
				sign++;
			else
				break;
		}
		for(int i = 0; i < s.length(); i++)
		{
			if(i < sign)
				s1[i] = s[i];
			if(i >= sign + 1) 
 				s2[i - sign - 1] = s[i];
		}
		for(int i = sign - 1; i >= 0; i--)
		{
			if(s1[i] == '0')
				t++;
			else
				break;
		}
		if(t == sign)
		cout << '0';
		else
		{
			for(int i = sign - t - 1; i >= 0; i--)
			{
				cout << s1[i];	
			}
		}
		t = 0;
		cout << '.';
		for(int i = 0; i <= s.length() - sign - 2; i++)
		{
			if(!(s2[i] - '0'))
				t++;
			else
				break;
		}
		if(t == s.length() - 1 - sign)
			cout << '0';
		else
		{
			for(int i = s.length() - 2 - sign; i >= t; i--)
			{
				cout << s2[i];
			}
		}
	}
	if(key == 3)
	{
		char s1[20];
		char s2[20];
		int sign = 0;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] != '/')
				sign++;
			else
				break;
		}
		for(int i = 0; i < s.length(); i++)
		{
			if(i < sign)
				s1[i] = s[i];
			if(i >= sign + 1)
				s2[i - sign - 1] = s[i];
		}
		for(int i = sign - 1; i >= 0; i--)
		{
			if(s1[i] == '0')
				t++;
			else
				break;
		}
		if(t == sign)
			cout << '0';
		else
		{
			for(int i = sign - t - 1; i >= 0; i--)
			{
				cout << s[i];
			}
		}
		t = 0;
		cout << '/';
		for(int i = s.length() - sign - 2; i >= 0; i--)
		{
			if(!(s2[i] - '0'))
				t++;
			else
				break;
		}
		for(int i = s.length() - t - 2 - sign; i >= 0; i--)
		{
			cout << s2[i];
		}
	}
	if(key == 4)
	{
		for(int i = s.length() - 2; i >= 0; i--)
		{
			if(!(s[i] - '0'))
				t++;
			else
				break;
		}
		if(t == s.length() - 1)
			cout << '0';
		else
		{
			for(int i = s.length() - t - 2; i >= 0; i--)
			{
				cout << s[i];
			}
		}
		cout << '%';
	}
	cout << endl;
	return 0;
}




 
