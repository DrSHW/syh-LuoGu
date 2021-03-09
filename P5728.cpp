#include<bits/stdc++.h>
using namespace std;

struct stu
{
	string n;
	int a;
	int b;
	int c;
	int sum;
} s[1005];

int main()
{
	int n, c = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> s[i].n >> s[i].a >> s[i].b >> s[i].c;
		s[i].sum = s[i].a + s[i].b + s[i].c;
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(abs(s[i].a-s[j].a) <= 5 && abs(s[i].b-s[j].b) <= 5 
			&& abs(s[i].c-s[j].c) <= 5 && abs(s[i].sum-s[j].sum) <= 10)
				cout << s[i].n << ' ' << s[j].n << endl;
		}
	}
	return 0;
}
