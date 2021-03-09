#include<bits/stdc++.h>

using namespace std;

int a[2000] = {0};
int main() 
{
	int y1, y2, c = 0, i = 0;
	cin >> y1 >> y2;
	for(int y = y1; y <= y2; y++)
	{
	 	if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	 	{
	 		a[i++] = y;
	 		c++;
		 }
	}
	i = 0;
	cout << c << endl;
	while(a[i])
	{
		cout << a[i++] << ' ';
	}
	cout << endl;
	return 0;
}

