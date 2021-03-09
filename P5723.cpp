#include<bits/stdc++.h>
using namespace std;

int main()
{
	int L, i, j, s = 0,flag = 1;
	cin >> L;
	int p[10000];
	for(i = 2; i < 10000; i++)
	{
		flag = 1;
		for(j = 2; j <= sqrt(i); j++)
		{
			if(i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1) 
		{
			p[s] = i;
			s++;
		}
	}
	int q = 0, sum = 0;
	while(sum <= L)
	{
		sum += p[q];
		q++;
	}
	for(int h = 0; h < q - 1; h++)
	{
		printf("%d\n",p[h]);
	}
	cout << q - 1 << endl;
	return 0;
}














