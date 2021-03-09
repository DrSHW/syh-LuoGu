#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n, m;
	cin >> n >> m;
	long long sum, a = 0, b;
	sum = n*(n+1)*m*(m+1)/4;
	while(n!=0 && m!=0)
	{
		a+=(m*n);
		m--;
		n--; 
	}
	b = sum - a; 
	cout << sum <<' '<< a << ' ' << b;
	return 0;
 } 
