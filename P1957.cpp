#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		char a;
		string s1, s2;
		cin >> a >> s1 >> s2;
		int x1, x2, r, s, t , w1 = 0, w2 = 0, wr = 0, b;
		if(a == 'a') b = 1;
		else if(a == 'b') b = 2;
		else if(a == 'c') b = 3;
		else if(a == 'c') b = 4;
		else
			s1 = a + s1;
		x1 = atoi(s1.c_str());
		x2 = atoi(s2.c_str());
		if(b == 1)
		{
			int t1 = x1, t2 = x2;
			while(t1)
			{
				t1 /= 10;
				w1++;
			}
			while(t2)
			{
				t2 /= 10;
				w2++;
			}
			r = x1 + x2;
			int tr = r;
			while(tr)
			{
				tr /= 10;
				wr++;
			}
			if(x1 == 0) w1++; 
			if(x2 == 0) w2++;
			if(r <= 0) wr++;
			cout << x1 << '+' << x2 << '=' << r;
			cout << endl << w1 + 2 + w2 + wr << endl;
			w1 = 0; w2 = 0; wr = 0; r = 0;
		}
	if(b == 2)
		{
			int t1 = x1, t2 = x2;
			while(t1)
			{
				t1 /= 10;
				w1++;
			}
			while(t2)
			{
				t2 /= 10;
				w2++;
			}
			r = x1 - x2;
			int tr = r;
			while(tr)
			{
				tr /= 10;
				wr++;
			}
			if(x1 == 0) w1++; 
			if(x2 == 0) w2++; 
			if(r <= 0) wr++;
			cout << x1 << '-' << x2 << '=' << r;
			cout << endl << w1 + 2 + w2 + wr << endl;
			w1 = 0; w2 = 0; wr = 0; r = 0; 
		}
		if(b == 3)
		{
			int t1 = x1, t2 = x2;
			while(t1)
			{
				t1 /= 10;
				w1++;
			}
			while(t2)
			{
				t2 /= 10;
				w2++;
			}
			r = x1 * x2;
			int tr = r;
			while(tr)
			{
				tr /= 10;
				wr++;
			}
			if(x1 == 0) w1++; 
			if(x2 == 0) w2++;
			if(r <= 0 ) wr++;
			cout << x1 << '*' << x2 << '=' << r;
			cout << endl << w1 + 2 + w2 + wr << endl;
			w1 = 0; w2 = 0; wr = 0; r = 0;
		}
		if(b == 4)
		{
			int t1 = x1, t2 = x2;
			while(t1)
			{
				t1 /= 10;
				w1++;
			}
			while(t2)
			{
				t2 /= 10;
				w2++;
			}
			r = x1 / x2;
			int tr = r;
			while(tr)
			{
				tr /= 10;
				wr++;
			}
			if(x1 == 0) w1++; 
			if(x2 == 0) w2++;
			if(r <= 0) wr++;
			cout << x1 << '/' << x2 << '=' << r;
			cout << endl << w1 + 2 + w2 + wr << endl;
			w1 = 0; w2 = 0; wr = 0; r = 0;
		}
	}
	return 0;
}



