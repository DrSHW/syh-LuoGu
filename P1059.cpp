#include<bits/stdc++.h>
using namespace std;
# define MAXN 110
int main()
{
	int N, i;
	int r[MAXN];
	cin >> N;
	int count = N;
	for(i = 0; i < N; i++)
	{
		cin >> r[i];
	}
	sort(r,r + N);
	for(i = 0; i < N-1; i++)
	{
		if(r[i] == r[i+1])
		{
			r[i] = -1;
			count--;
		}
	}
	cout << count << endl;
	for(i = 0; i < N; i++)
	{
		if(r[i] > 0)
		{
			cout << r[i] << " ";
		}
	}
	return 0;
}
