#include<bits/stdc++.h>
 
using namespace std;

int n, a;
string s;
string c1;
string b1;
int b, c;

int main()
{
	cin >> n;
	cin >> s;
	for(int i = 0; i < n; i++)
	{
		cin >> a;
		if(a == 1)
		{
			cin >> b1;
			s += b1;
			cout << s << endl;
		}
		else if(a == 2)
		{
			cin >> b >> c;
			c1 = s.substr(b, c);
			s = c1;
			cout << s;
			cout << endl;
		}
		else if(a == 3)
		{
			cin >> b >> b1;
			s.insert(b, b1);
			cout << s << endl;
		}
		else if(a == 4)//²Ù×÷4
		{
			cin >> b1;
			if(s.find(b1) < s.size())
				cout << s.find(b1) << endl;
			else
				cout << -1 << endl;
		}
	}
    return 0;
}
