#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, j;
	int N;
	cin >> N;
	for(n = 1; n*(n + 1) < 2 * N; n++);
	j = N - n * (n - 1) / 2;
	//cout << n << j;
	if(n % 2 == 0)
	{
		cout << j << "/" << n - j + 1;
	}
	else
	{
		cout << n - j + 1 << "/" << j;
	}
	return 0;
}

