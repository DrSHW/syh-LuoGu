#include<bits/stdc++.h>
using namespace std; 

const int MAX_N = 1000 ;
int n,m;
int a[MAX_N] = {0};

int main()
{
	scanf("%d%d", &n, &m);
	for(int i = 0; i < m; i++)
	{
		int s;
		cin >> s;
		a[s]++;
	}
	for(int i = 0; i <= n; i++)
		for(int j = 0; j < a[i]; j++)
			cout << i << ' ';
	return 0;
}
