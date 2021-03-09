#include<bits/stdc++.h>

using namespace std;
int c[25][25][25];

int main()
{
	int x, y, z, n;
	cin >> x >> y >> z;
	int i, j, k;
	for(i = 1; i <= x; i++)
	{
		for(j = 1; j <= y; j++)
		{
			for(k = 1; k <= z; k++)
			{
				c[i][j][k] = 1;
			}
		}
	}
	int x1, y1, x2, y2, z1, z2;
	cin >> n;
	while(n--)
	{
		cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
		for(i = min(x1, x2); i <= max(x1, x2); i++)
		{
			for(j = min(y1, y2); j <= max(y1, y2); j++)
			{
				for(k = min(z1, z2); k <= max(z1, z2); k++)
				{
					c[i][j][k] = 0;
				}
			}
		}
	}
	int r = 0;
	for(i = 1; i <= x; i++)
	{
		for(j = 1; j <= y; j++)
		{
			for(k = 1; k <= z; k++)
			{
				if(c[i][j][k] == 1)
				{
					r++;
				}
			}
		}
	}
	cout << r;
	return 0;
}
