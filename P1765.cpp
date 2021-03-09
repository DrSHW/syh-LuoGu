#include<bits/stdc++.h>

using namespace std;
//打表
int a[27] = {1,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
int main()
{
	int key;
	string s1;
	getline(cin, s1);
	int c = 0; 
	for(int i = 0; i < s1.length(); i++) //打表 
	{
		if(s1[i] != ' ')
			c += a[s1[i] - 'a' + 1];
		else
			c += a[0];
	}
	cout << c << endl;
	return 0;
}

