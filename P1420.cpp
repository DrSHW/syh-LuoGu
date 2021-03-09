#include <bits/stdc++.h> 
using namespace std;

int arr[10005];
int main()
{
	int n, i, c = 1, max = 0;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < n; i++)
	{
		if(arr[i] + 1 == arr[i + 1])
			c++;
		else c = 1;
		if(c > max) max = c;
	}
	cout << max << endl;
	return 0;
}
