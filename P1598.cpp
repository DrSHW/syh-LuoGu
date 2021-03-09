#include<bits/stdc++.h>

using namespace std;

int a[26] = {0};
int main()
{
	string s;
	while(cin >> s)
	{
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] >= 'A' && s[i] <= 'Z')
				a[(int)(s[i] - 'A')]++;
		}
	}
	int maxn = 0;
	for(int i = 0; i < 26; i++)
	{
		if(maxn < a[i])
			maxn = a[i];
	}
	for(int i = maxn; i > 0; i--)
	{
		for(int j = 0; j < 26; j++)
		{
    		if(a[j] >= i)
				cout << "* ";
			else 
				cout << "  ";
    	}
    	cout << endl;
	}
	for(int i = 0; i < 26; i++)
		printf("%c ",i+'A');
	return 0;
}



