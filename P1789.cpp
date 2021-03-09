#include<bits/stdc++.h>

using namespace std;

int s[105][105] = {0};
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	int x1,x2;
	for(int u = 1; u <= m; u++)
	{
		cin >> x1 >> x2;
		if(x1 + 2 <= n)
			s[x1+2][x2] = 1;
		if(x1 - 2 > 0)
			s[x1-2][x2] = 1;
		if(x2 + 2 <= n)
			s[x1][x2+2] = 1;
		if(x2 - 2 > 0)
			s[x1][x2-2] = 1;
		for(int i = x1 - 1; i <= x1 + 1; i++)
		{
			for(int j = x2 - 1; j <= x2 + 1; j++)
			{
				if(i > 0 && j > 0 && i <= n && j <= n)
					s[i][j] = 1;
			}
		}
	 } 
	 for(int u = 1; u <= k; u++)
	 {
		cin >> x1 >> x2;
		for(int i = x1 - 2; i <= x1 + 2; i++)
		{
			for(int j = x2 - 2; j <= x2 + 2; j++)
			{
				if(i > 0 && j > 0 && i <= n && j <= n)
					s[i][j] = 1;
			}
		}
	 }
	 int c = 0;
	 for(int i = 1; i <= n; i++)
	 {
		for(int j = 1; j <= n; j++)
		{
			if(!s[i][j])
				c++;
		}
     }
	cout << c << endl;
	return 0;	
 } 
 
 
 
 
