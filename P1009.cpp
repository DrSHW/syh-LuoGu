#include<bits/stdc++.h>
using namespace std;

int a[5000];
int c[5000];
int n;

void plus1(int *a,int *c)
{
	int jw = 0;
	for(int i = 1; i <= 1000; i++)
	{
		c[i] += a[i] + jw;
		jw = c[i] / 10;
		c[i] %= 10;
	}
}

void mul(int *a,int x)
{
	int jw = 0;
	for(int i = 1; i <= 1000; i++)
	{
		a[i] = a[i] * x + jw;
		jw = a[i] / 10;
		a[i] %= 10;
	}
}

int main()
{
	cin >> n;
	a[1] = 1;
	for(int i = 1; i <= n; i++)
	{
		mul(a, i);
		plus1(a, c);
	}
	bool flag = 0;
	for(int i = 1000; i >= 1; i--)
	{
		if(c[i] != 0) 
			flag = 1;
		if(flag)
			cout << c[i];
	}
	return 0;
}




