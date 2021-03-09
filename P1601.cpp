#include<bits/stdc++.h>
#define MAXN 505

using namespace std;

string s1, s2;
int a[MAXN] = {0};
int b[MAXN] = {0};
int c[MAXN] = {0};

int main()
{
	cin >> s1 >> s2;
	int p = s1.length(), q = s2.length();
	for(int i = 0; i < p; i++)
	{
		a[i] = s1[i] - '0';
	}
	for(int i = 0; i < q; i++)
	{
		b[i] = s2[i] - '0';
	}
	if(p >= q)
	{
		int t = q;
		for(int i = p - 1; i >= 0; i--)
		{
			if(t >= 1) 
				c[i] = a[i] + b[--t];
			else 
				c[i] = a[i];
		}
		for(int i = p - 1; i >= 1; i--)
		{
			c[i - 1] += c[i] / 10;
			c[i] = c[i] % 10;
		}
		if(c[0] >= 10) 
		{
			cout << c[0] / 10;
			c[0] %= 10;
		}
		for(int i = 0; i < p; i++)
		{
			cout << c[i];
		}
	}
	if(p < q)
	{
		int t = p;
		for(int i = q - 1; i >= 0; i--)
		{
			if(t >= 1) 
				c[i] = b[i] + a[--t];
			else 
				c[i] = b[i];
		}
		for(int i = q - 1; i >= 1; i--)
		{
			c[i - 1] += c[i] / 10;
			c[i] = c[i] % 10;
		}
		if(c[0] >= 10) 
		{
			cout << c[0] / 10;
			c[0] %= 10;
		}
		for(int i = 0; i < q; i++)
		{
			cout << c[i];
		}
	}
	return 0;
}




