#include<bits/stdc++.h>
#define N 100000
using namespace std;

int prime[N] = {0};

int main()
{
	int i, j;
	prime[0] = 1;
	prime[1] = 1;
	for(i = 2; i < N; i++)
	{
		if(!prime[i])
		{
			for(j = 2; i * j < N; j++)
				prime[i * j] = 1;
		}
	}
//	for(i = 2; i < N; i++)
//	{
//		cout << i << ' ' << prime[i] << endl;
//	}
	int n, a;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a;
		if(!prime[a])
			cout << a << ' ';
	}
	return 0;
}





