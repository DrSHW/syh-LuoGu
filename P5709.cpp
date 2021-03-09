#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m, t, s;
	cin >> m >> t >> s;
	if(m * t - s <= 0) 
		cout << 0;
	else if(s % t == 0)
		cout << (m - s / t);	
	else
		cout << (m - s / t) - 1;
	return 0;
 } 
