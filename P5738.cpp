#include<bits/stdc++.h>

using namespace std;

int a[105][25];
int ma[105];
int mi[105];

int main()
{
	int m, n, maxn, minn;
	double res = 0;
	double avg;
	cin >> m >> n;
	for(int i = 0; i < m; i++)
	{
		maxn = 0;
		minn = 10;
		for(int j = 0; j < n; j++)
		{
			cin >> a[i][j];
			if(maxn < a[i][j])
				maxn = a[i][j];
			if(minn > a[i][j])
				minn = a[i][j];
		}
		ma[i] = maxn;
		mi[i] = minn;
//		cout << maxn << ' ' << minn << endl;
	}
	int sum;
	for(int i = 0; i < m; i++)
	{
		sum = 0;
		for(int j = 0; j < n; j++)
		{
			sum += a[i][j];
		}
		sum = sum - ma[i] - mi[i];
		avg = 1.0 * sum / (n - 2);
		if(avg > res) 
			res = avg;
	}
	printf("%.2lf", res);
	return 0;
}




