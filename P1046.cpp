#include<bits/stdc++.h>
using namespace std;
#define N 10

int main()
{
	int h[N];
	int i, t, count = 0;
	for(i = 0; i < N; i++)
	{
		cin >> h[i];
	}
	cin >> t;
	for(i = 0; i < N; i++)
	{
		if(h[i] - 30 <= t)
			count++;
	}
	cout << count;
	return 0;
}
