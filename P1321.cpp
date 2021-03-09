#include<bits/stdc++.h>
//90
using namespace std;

char s[400];

int main()
{
	cin >> s;
	int c1 = 0, c2 = 0;
	for(int i = 0; i < strlen(s); i++)
	{
		if(i + 2 < strlen(s))
		{
			if(s[i] == 'b' && s[i + 1] == 'o' && s[i + 2] == 'y')
			{
				c1++;
				s[i] = '.'; s[i + 1] = '.'; s[i + 2] = '.';
			}
		}
		if(i + 3 < strlen(s))
		{
			if(s[i] == 'g' && s[i + 1] == 'i' && s[i + 2] == 'r' && s[i + 3] == 'l')
			{
				c2++;
				s[i] = '.'; s[i + 1] = '.'; s[i + 2] = '.'; s[i + 3] = '.';
			}
		}
	}
		
	for(int i = 0; i < strlen(s); i++)
	{
		if(i + 2 < strlen(s))
		{
			if(s[i] == 'b' && s[i + 1] == 'o' && s[i + 2] != 'y')
			{
				c1++;
				s[i] = '.'; s[i + 1] = '.';
			}
			if(s[i] != 'b' && s[i + 1] == 'o' && s[i + 2] == 'y')
			{
				c1++;
				s[i + 2] = '.'; s[i + 1] = '.';
			}
		}
		if(i + 3 < strlen(s))
		{
			if(s[i] != 'g' && s[i + 1] == 'i' && s[i + 2] == 'r' && s[i + 3] == 'l')
			{
				c2++;
				s[i + 1] = '.'; s[i + 2] = '.'; s[i + 3] = '.';
			}
			if(s[i] == 'g' && s[i + 1] == 'i' && s[i + 2] == 'r' && s[i + 3] != 'l')
			{
				c2++;
				s[i] = '.'; s[i + 1] = '.'; s[i + 2] = '.';
			}
		}
	}
	for(int i = 0; i < strlen(s); i++)
	{
		if(i + 2 < strlen(s))
		{
			if(s[i] == 'b' && s[i + 1] != 'o' && s[i + 2] != 'y')
			{
				c1++;
				s[i] = '.';
			}
			if(s[i] != 'b' && s[i + 1] == 'o' && s[i + 2] != 'y')
			{
				c1++;
				s[i + 1] = '.';
			}
			if(s[i] != 'b' && s[i + 1] != 'o' && s[i + 2] == 'y')
			{
				c1++;
				s[i + 2] = '.';
			}
		}
		if(i + 3 < strlen(s))
		{
			if(s[i] != 'g' && s[i + 1] != 'i' && s[i + 2] == 'r' && s[i + 3] == 'l')
			{
				c2++;
				s[i + 2] = '.'; s[i + 3] = '.';
			}
			if(s[i] == 'g' && s[i + 1] == 'i' && s[i + 2] != 'r' && s[i + 3] != 'l')
			{
				c2++;
				s[i] = '.'; s[i + 1] = '.';
			}
			if(s[i] != 'g' && s[i + 1] == 'i' && s[i + 2] == 'r' && s[i + 3] != 'l')
			{
				c2++;
				s[i + 2] = '.'; s[i + 1] = '.';
			}
		}
	}
	for(int i = 0; i < strlen(s); i++)
	{
		if(i + 3 < strlen(s))
		{
			if(s[i] != 'g' && s[i + 1] != 'i' && s[i + 2] != 'r' && s[i + 3] == 'l')
			{
				c2++;
				s[i + 3] = '.';
			}
			if(s[i] != 'g' && s[i + 1] != 'i' && s[i + 2] == 'r' && s[i + 3] != 'l')
			{
				c2++;
				s[i + 2] = '.';
			}
			if(s[i] != 'g' && s[i + 1] == 'i' && s[i + 2] != 'r' && s[i + 3] == 'l')
			{
				c2++;
				s[i + 1] = '.';
			}
			if(s[i] == 'g' && s[i + 1] != 'i' && s[i + 2] != 'r' && s[i + 3] != 'l')
			{
				c2++;
				s[i] = '.';
			}
		}
	}
	cout << c1 << endl << c2 << endl;
	return 0;
 } 




