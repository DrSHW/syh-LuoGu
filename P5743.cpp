#include<bits/stdc++.h>

using namespace std;

int i = 1;
void cal()
{
	i = (i + 1) * 2;
}

int main()
{
	int n;
	cin >> n;
	n--;
	while(n--)
		cal();
	cout << i << endl;
	return 0;	
}



