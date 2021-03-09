#include<bits/stdc++.h>

using namespace std;
int a[105];
int c[105] = {0};

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		for(int j = 0; j < i; j++)
		{
			if(a[i] > a[j])
			c[i] ++;
		 } 
		cout << c[i] << ' ';
	}
	return 0;
 } 
