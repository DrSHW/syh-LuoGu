#include<bits/stdc++.h>

using namespace std;

int arr[2000000] = {0}; 
int main()
{
	double a;
	int n, t;
	cin >> n;
	int max = 0, s;
	while(n--)
	{
		cin >> a >> t;
		if(a*t > max)
			max = a * t; 
		for(int i = 1; i <= t; i++)
		{
			s = i * a;
			if(!arr[s]) 
				arr[s] = 1;
			else
				arr[s] = 0;
		}
	}
	for(int i = 0; i <= max; i++)
	{
		if(arr[i])
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}



