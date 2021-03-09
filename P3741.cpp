#include<bits/stdc++.h>

using namespace std;

char s[105];

int main()
{
	int n, c = 0;
	cin >> n;
	cin >> s;
	for(int i = 0; i < n; i++)
	{
		if(s[i] == 'V' && s[i + 1] == 'K')
		{
			c++;
			s[i] = '0';
			s[i + 1] = '0';
		}
	}
	for(int i = 0; i < n; i++)
	{
		if((s[i] == 'V' && s[i + 1] == 'V') || (s[i] == 'K' && s[i + 1] == 'K'))
		{
			c++;
			break;
		}
	}
	cout << c << endl;
	return 0;
 } 




