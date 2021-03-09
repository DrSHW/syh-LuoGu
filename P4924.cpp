#include<bits/stdc++.h>
#define MAXN 505

using namespace std;

int m[MAXN][MAXN];

int main()
{
	int n;
	int i, j;
	cin >> n; 
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++)
			m[i][j] = (i-1)*n + j;
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
			
	
	
	return 0;
}



 
