#include <bits/stdc++.h> 
using namespace std;

int c[105];
int main()
{
	int n, i, max = 0, min=1001;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		scanf("%d", &c[i]);
	}
	for(i = 0; i < n; i++)
	{
		if(c[i] > max) max = c[i];
		if(c[i] < min) min = c[i];
	}
	cout << (max - min) << endl;
	return 0;
}
