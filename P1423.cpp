#include<bits/stdc++.h>

using namespace std;

int main()
{
	double sum = 0;
	double goal;
	cin >> goal;
	double d = 2;
	int c = 0;
	while(sum < goal)
	{
		sum += d;
		d *= 0.98;
		c++;
	}
	cout << c;
	return 0;
}
