#include<bits/stdc++.h>
using namespace std;
int l;
int r[10010] = {0};

int main()
{
	int m, s, e, i, count = 0;
	cin >> l >> m;
	while(m--)
	{
		cin >> s >> e;
		for(i = s; i <= e ; i++)
		{
			r[i] = 1;
		}
	}
	for(i = 0; i <= l; i++)
	{
		if(!r[i])
			count ++;
	}
	cout << count;
	return 0;
}
