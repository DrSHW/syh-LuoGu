#include<bits/stdc++.h>

using namespace std;

struct state
{
	int f;
	string str;
}s[100000];

struct c
{
	int f;
	int step;
}c[100000];
int main()
{
	int n, m, i;
	cin >> n >> m;
	for(i = 0; i < n; i++)
	{
		cin >> s[i].f >> s[i].str;
	}
	for(i = 0; i < m; i++)
	{
		cin >> c[i].f >> c[i].step;
	}
	int r = 0, j = 0;
	for(i = 0; i < m; i++)
	{
		if(c[i].f == 1 && s[j].f == 0)
			r += c[i].step; 
		if(c[i].f == 0 && s[j].f == 1)
			r += c[i].step; 
		if(c[i].f == 1 && s[j].f == 1)
			r -= c[i].step; 
		if(c[i].f == 0 && s[j].f == 0)
			r -= c[i].step; 
		while(r <= 0) r += n;
		r = r % n;
		j = r;
	}
	cout << s[r].str << endl
	return 0;
}
