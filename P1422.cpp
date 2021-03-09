#include<bits/stdc++.h>
using namespace std;

int main()
{
	float n, sum;
	cin >> n;
	if(n >= 0 && n <= 150)
	{
		sum = n * 0.4463;
	}
	if(n > 150 && n <= 400)
	{
		sum = 150 * 0.4463 + (n - 150) * 0.4663;
	}
	if(n > 400)
	{
		sum = 150 * 0.4463 + (400 - 150) * 0.4663 + (n - 400) * 0.5663;
	}
	printf("%.1f\n", sum);
	return 0;
 } 
