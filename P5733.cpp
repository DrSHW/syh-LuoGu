#include<bits/stdc++.h>
using namespace std;
  
int main()
{
	char a[105];
	cin >> a;
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 'a' + 'A';
		}
	}
	cout << a << endl;
	return 0;
}
