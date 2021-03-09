#include<bits/stdc++.h>

using namespace std;

int a[26] = {0};
char c[105];
  
int main()
{
	cin >> c;
	for(int i = 0; i < strlen(c); i++)
	{
		a[c[i] - 'a']++;
	}
	int maxn = a[0], minn = 100;
	for(int i = 0; i < 26; i++)
	{
		if(a[i] > maxn)
			maxn = a[i];
		if(a[i] < minn && a[i])
			minn = a[i];
	}
	int x = maxn - minn, flag = 1;
	if(x == 0 || x == 1)
		flag = 0;
	else
	{
		for(int i = 2; i * i <= x; i++)
		{
			if(!(x % i))
			{
				flag = 0;
				break;
			}
		}
	}
	if(flag)
		cout << "Lucky Word" << endl << x ;
	else
		cout << "No Answer" << endl << '0';
	return 0;
}



