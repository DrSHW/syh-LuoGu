#include<bits/stdc++.h>
using namespace std;

struct stu
{
	int n;
	int a;
	int b;
	int sum;
	double cald;
} s[1005];

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> s[i].n >> s[i].a >> s[i].b; 
		s[i].sum = s[i].a + s[i].b;
		s[i].cald = 0.7 * s[i].a + 0.3 * s[i].b;
//		cout << s[i].sum;
		if(s[i].sum > 140 && s[i].cald >= 80)
			cout << "Excellent" << endl;
		else
			cout << "Not excellent" << endl;
	}
	return 0;
}




