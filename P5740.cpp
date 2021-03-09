#include<bits/stdc++.h>

using namespace std;

struct STU
{
	string n;
	int c;
	int m;
	int e;
	int sum;
};

bool cmp(STU s1, STU s2)
{
	return s1.sum > s2.sum;
}

int main()
{
	struct STU s[1005];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> s[i].n >> s[i].c >> s[i].m >> s[i].e;
		s[i].sum = s[i].c + s[i].m + s[i].e;
	}
	sort(s,s + n, cmp);
	cout << s[0].n << ' ' << s[0].c << ' ' << s[0].m << ' ' << s[0].e;
	return 0;
}





