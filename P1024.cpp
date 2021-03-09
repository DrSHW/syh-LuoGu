#include<bits/stdc++.h>
using namespace std;
double a, b, c, d;

double cal(double x)
{
	return a*x*x*x + b*x*x + c*x+d;
}

int main()
{
	int i, s = 0;
	double l, r, x1, x2, m;
	cin >> a >> b >> c >> d;
	for(i = -100; i < 100; i++)
	{
		l = i;
		r = i + 1;
		x1 = cal(l);
		x2 = cal(r);
		if(x1 == 0)
		{
			printf("%.2lf ", l);
			s++;
		}
		if(x1*x2 < 0)
		{
			while(r - l >= 0.001)
			{
				m = (l + r) / 2;
				if(cal(l)*cal(m) < 0)
				{
					r = m;
				}
				else
				{
					l = m;
				}
			}
			printf("%.2lf ",l);
			s++;
		}
		if(s == 3) 
			break;
	}
	return 0;
}
