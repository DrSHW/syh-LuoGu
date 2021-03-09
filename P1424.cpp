#include<bits/stdc++.h>
using namespace std;

int main()
{
	int w, d, sum, r;
	cin >> w >> d;
	int c = d / 7;
	r = d % 7;
	sum = c * 250 * 5;
	for(int i = 0; i < r; i++)
	{
		if(w + i != 6 && w + i != 7)
		{
			sum += 250;	
		}	
	}
	cout << sum << endl;
	return 0;
}
