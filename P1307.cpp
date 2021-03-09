#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, t, r = 0,flag = 1;
	cin >> n;
	if(n < 0)
	{
		flag = 0;
		n *= -1;
	}
	while(n)
	{
		m = n % 10;
		n /= 10;
		r *= 10;
		r += m;
	}
	if(flag == 1)
		cout << r << endl;
	else
		cout << -r << endl;
	return 0;
 } 
