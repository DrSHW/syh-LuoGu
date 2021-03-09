#include<bits/stdc++.h>

using namespace std;

int s[40005] = {0};
int main()
{
	int n, i = 1;
	cin >> n;
	int c0, c1;
	while(i <= n * n)
	{
		cin >> c0;
		for(int j = 1; j <= c0; j++)
		{
			s[i] = 0;
			i++;
		}
		cin >> c1;
		for(int j = 1; j <= c1; j++)
		{
			s[i] = 1;
			i++;
		}
	}
	for(int j = 1; j <= n * n; j++)
	{
		cout << s[j];
		if(!(j % n))
			cout << endl;
	}
	return 0;
}
