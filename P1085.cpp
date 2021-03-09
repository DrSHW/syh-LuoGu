#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t[7];
	int i, a, b, count = 0, max = 8, day;
	for(i = 0; i < 7; i++)
	{
		cin >> a >> b;
		t[i] = a + b;
		if(t[i] > max)
		{
			max = t[i];
			day = i + 1;
			count ++;
		}
	}
	if(count = 0)
		cout << 0;
	else
		cout << day;
		return 0;
}
