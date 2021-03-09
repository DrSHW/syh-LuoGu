#include<bits/stdc++.h>

using namespace std;
int ma[1025][1025];

int pow2(int n)
{
	int s = 1;
	for(int i = 1; i <= n; i++)
	{
		s *= 2;
	}
	return s; 
}

void di(int x,int l,int q)
{
	if(x == 2) 
	{
		ma[l][q]=0;
		return;
	}
	for(int i = l; i <= l + x/2 - 1; i++)
		for(int j = q; j <= q + x/2 - 1; j++)
			ma[i][j]=0; 
	di(x/2, l + x/2, q);
	di(x/2, l + x/2, q + x/2); 
	di(x/2, l, q + x/2); 
}

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < pow2(n); i++)
	{
		for(int j = 0; j < pow2(n); j++)
		{
			ma[i][j] = 1;
		}
	}
	di(pow2(n),0,0);
	for(int i = 0; i < pow2(n); i++)
	{
		for(int j = 0; j < pow2(n); j++)
		{
			cout << ma[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}




