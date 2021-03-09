#include<bits/stdc++.h> 

using namespace std;
typedef long long ll; 
ll mul(int n)
{
	ll s = 0;
	if(n == 1) return 1;
	else
	{
		s += n*mul(n-1);
	}
	return s;
}

int main()
{
	int n;
	cin >> n;
	ll sum = mul(n);
	cout << sum << endl;
	return 0;
} 



