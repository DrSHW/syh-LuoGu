#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int y,f,d;
	cin >> y;
	if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		f=1;
	}
	else
	{
		f=0;
	}
	cout << f << endl;
	return 0;
}
