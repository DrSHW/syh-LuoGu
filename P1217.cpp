#include<bits/stdc++.h>
using namespace std;

const int N = 100000001; 
bool number[N];

int isBack(int n)
{
	int m, t, r = 0,y = n;
	while(n)
	{
		m = n % 10;
		n /= 10;
		r *= 10;
		r += m;
	}
	if(r == y)
		return 1;
	return 0;
}

int main()
{
	int l, u, i, j;
	memset(number,true,sizeof(number));
	number[1] = false;
	for(i = 2;i * i <= N; i++)
	{
		if(number[i])
		{
			for(j = 2; j < N/i ;j++)
				number[i*j] = false;
		}
	}
	cin >> l >> u;
	for(i = l; i <= u; i++)
	{
		if(number[i] && isBack(i) == 1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
 } 
