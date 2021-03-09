#include<bits/stdc++.h>

using namespace std;

int a[40005] = {0};
int main()
{
	int n = 0, i = 0;
	char c;
	char sign = '0';
	while(cin >> c)
	{
		if(c == '\n')
			continue;
		n++;
		if(c == sign)
		{
			a[i]++;
		}
		else
		{
			a[++i]++;
		}
		sign = c;
	}
	n = (int)sqrt(n);
	cout << n;
	for(int j = 0; j <= i; j++)
		cout << ' ' << a[j];
	return 0;
 } 
 
 
 
 
 
