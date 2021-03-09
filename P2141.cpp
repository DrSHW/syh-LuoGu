#include<bits/stdc++.h>

using namespace std;

int a[105];
int b[105];

int main()
{
	int n, i = 0, j, c = 0;
	cin >> n;
	for(i; i < n; i++)
	{
		cin >> a[i];
		b[i] = 0;
	}
	sort(a,a + n);
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++) 
		{
			for(int k = 0; k < n; k++)
			{
				if(k == i || k == j) continue;
				if(a[k] == a[i] + a[j] && !b[k])
				{
					c++;
					b[k] = 1;
				}
			}
		}
	}
	cout << c << endl;
	return 0;
}

