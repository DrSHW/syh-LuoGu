#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
	bool flag = true;
	for(int i = 2; i * i <= n; i++)
	{
		if(n % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

int main()
{
	int n;
	cin >> n;
	for(int i = 4; i <= n; i+=2)
	{
		for(int j = 2; j < i; j++)
		{
			if(isPrime(j) && isPrime(i - j))
			{
				cout << i << '=' << j << '+' << i - j << endl;
				break;
			}
		}
	}
	return 0;
}



 
