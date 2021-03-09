#include<bits/stdc++.h>

using namespace std;

char a[55];

int main()
{
	int n;
	cin >> n >> a;
	for(int i = 0; i < strlen(a); i++)
	{
		a[i] = (a[i] + n + 7) % 26 + 'a';
	}
	cout << a << endl;
	return 0;	
 } 
