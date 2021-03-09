#include<bits/stdc++.h>

using namespace std;

int main()
{
	int s;
	cin >> s;
	int x, k;
	for(k = 1; ;k++)
	{
		for(x = 100; x >= 0; x--)
		{
			if(7*x + 21*k == s / 52)
			{
				cout << x << endl << k << endl;
				return 0; 
			}
		}
	}
}
