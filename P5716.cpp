#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int y,m,f,d;
	cin >> y >> m;
	if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
	 	f=29;
	}
	else
	{
	 	f=28;
	}
	switch(m)
	{ 
		case 1: d=31; break;
		case 2: d=f ; break;
		case 3: d=31; break;
		case 4: d=30; break;
		case 5: d=31; break;
		case 6: d=30; break;
		case 7: d=31; break;
		case 8: d=31; break;
		case 9: d=30; break;
		case 10: d=31; break;
		case 11: d=30; break;
		case 12: d=31; break;
	} 
	cout << d << endl;
	return 0;
}
	
