#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k, i = 1, count = 0;
	cin >> k;
	double sum = 0.0;
	while(sum <= k)
	{
		sum += 1.0 / i;
		count++;
		i++;
	}
	cout << count;
	return 0;
}
