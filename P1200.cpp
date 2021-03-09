#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s1;
	string s2;
	int i, mul1 = 1, mul2 = 1;
	cin >> s1;
	cin >> s2;
	for(i = 0; i < s1.length(); i++)
	{
		mul1 *= (int)(s1[i] - 'A' + 1);
	}
	for(i = 0; i < s2.length(); i++)
	{
		mul2 *= (int)(s2[i] - 'A' + 1);
	}
	if(mul1 % 47 == mul2 % 47)
		cout << "GO" << endl;
	else
		cout << "STAY" << endl;
	return 0;
}





