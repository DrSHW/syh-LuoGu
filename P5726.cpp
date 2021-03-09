#include<bits/stdc++.h>

using namespace std;

int a[1005];
int main()
{
	int n, i, sum = 0,max = 0,min = 10;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
		if(a[i] > max) max = a[i];
		if(a[i] < min) min = a[i];
	}
	sum -= (max + min);
	float avg;
	avg = 1.0 * sum / (n-2);
	printf("%.2f",avg);
	return 0;
}
