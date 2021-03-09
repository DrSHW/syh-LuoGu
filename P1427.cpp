#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
stack<ll> s;

int main()
{
	while(1)
	{
		ll n;
		cin >> n;
		if(n == 0)
		{
			break;
		}
		s.push(n);
	}
	while(!s.empty())
	{
		cout << s.top() << ' ';
		s.pop();
	}
	
	return 0;
}
