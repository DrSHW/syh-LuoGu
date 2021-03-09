#include<bits/stdc++.h>
using namespace std;
struct p
{
	int num;
	int price;
}s[3];

int main() 
{
	int n;
	int t[3];
	cin >> n;
	for(int i = 0; i < 3; i++)
	{
		cin >> s[i].num >> s[i].price;
		if(n % s[i].num == 0)
			t[i] = n / s[i].num *s[i].price;
		else
			t[i] = (n / s[i].num + 1) * s[i].price;
	} 
	sort(t, t + 3);
	cout << t[0] << endl;
	return 0;
}
	
