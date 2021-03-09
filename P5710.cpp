#include<bits/stdc++.h>

using namespace std;
int c[50000];

int main()
{
	int n;
	int i = 0;
	cin >> n;
	int t = n;
	while(n - 1)
	{
		if(n % 2)
		{
			n = n * 3 + 1;
			c[i] = n;
			i++;
		}
		else
		{
			n /= 2;
			c[i] = n;
			i++;
		}
	}
	cout << "1 ";
	for(int j = i - 2; j >= 0; j--)
	{
		cout << c[j] << ' ';
	}
	if(t != 1) cout << t;
	return 0;
}
