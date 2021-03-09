#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	int flag1, flag2;
	
	if(n % 2 == 0)
		flag1 = 1;
	else flag1 = 0;
	if(n > 4 && n <= 12)
		flag2 = 1;
	else flag2 = 0;
	
	if(flag1 == 1 && flag2 == 1)
		cout << 1 << " ";
	else cout << 0 << " ";
	
	if(flag1 == 1 || flag2 == 1)
		cout << 1 << " ";
	else cout << 0 << " ";
	
	if((flag1 == 1 && flag2 == 0) || (flag1 == 0 && flag2 == 1))
		cout << 1 << " ";
	else cout << 0 << " ";
	
	if(flag1 == 0 && flag2 == 0)
		cout << 1 << " ";
	else cout << 0 << " ";
	
	return 0;
}
	
	
	
	
	
	
