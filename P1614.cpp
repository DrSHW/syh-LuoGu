#include<bits/stdc++.h>
using namespace std;

int arr[3003];

int main()
{
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int min = 1000000, sum = 0;
	for(int i = 0; i < n - m + 1; i++)
	{
		for(int j = i; j <= i + m - 1; j++)
		{
			sum += arr[j];
		}
		if(sum < min)
		{
			min = sum;
		}
		sum = 0;
	}
	cout << min << endl;
	return 0; 
 } 
 
 
