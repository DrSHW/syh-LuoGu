#include<bits/stdc++.h>

using namespace std;

int a[7];
int c[7];
int r[8];
int main()
{
	int n, i, j, co;
	cin >> n;
	for(i = 0; i < 7; i++)
	{
		cin >> a[i];
	}
	int s = 0;
	while(n--)
	{
		co = 0;
		for(i = 0; i < 7; i++)
		{
			cin >> c[i];
			for(j = 0; j < 7; j++)
			{
				if(c[i] == a[j])
				{
					co++;
					continue;
				}
			}
		}
		r[7 - co]++;
	}
	for(i = 0; i < 7; i++)
	{
		cout << r[i] << ' ';
	}
	return 0;	
}
