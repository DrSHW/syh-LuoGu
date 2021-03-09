#include<bits/stdc++.h>
#define MAXN 100000

using namespace std;

string s1, s2;
int a[MAXN] = {0};
int b[MAXN] = {0};
int c[MAXN] = {0};

int main()
{
	cin >> s1 >> s2;
	int p = s1.length(), q = s2.length();
	for(int i = 1; i <= p; i++)
	{
		a[i] = s1[p - i] - '0';
	}
	for(int i = 1; i <= q; i++)
	{
		b[i] = s2[q - i] - '0';
	}
	for(int i = 1; i <= p; i++)
		for(int j = 1; j <= q; j++)
    		c[i + j - 1] += a[i] * b[j];
    for(int i = 1; i < p + q; i++)
	{
		c[i + 1] += c[i] / 10;
		c[i] %= 10;
	}
	int f = p + q;
	while(c[f] == 0 && f > 1)
		f--;
	for(int i = f; i >= 1; i--)
	{
		cout << c[i];
	}		
	return 0;
}
