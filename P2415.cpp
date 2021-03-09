#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, c=1;
	long long sum = 0;
	while(cin >> n)
	{
		sum *= 2;
		sum += n * pow(2,c - 1);
		c++;
	}
	cout << sum << endl;
	return 0;
}





