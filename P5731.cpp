#include<bits/stdc++.h>

using namespace std;

int s[12][12] = {0};
int main()
{
	int n, e = 1, flag = 1, x = 1, y = 0;
	cin >> n;
	while(e <= n*n)
	{
		while(y < n && !s[x][y + 1])
			s[x][++y] = e++;
		while(x < n && !s[x + 1][y])
			s[++x][y] = e++;
		while(y > 1 && !s[x][y - 1])
			s[x][--y] = e++;
		while(x > 1 && !s[x - 1][y])
			s[--x][y] = e++;
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			printf("%3d",s[i][j]);
		}
		cout << endl; 
	}
	return 0;
}
