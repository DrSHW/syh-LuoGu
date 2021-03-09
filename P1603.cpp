#include<bits/stdc++.h>

using namespace std;

string s[30] = 
{
"zero","one","two","three","four","five","six","seven",
"eight","nine","ten","eleven","twelve", "thirteen", 
"fourteen", "fifteen", "sixteen", "seventeen", "eighteen", 
"nineteen", "twenty","a","both","another","first","second","third"
};

int val[30]={0,1,4,9,16,25,36,49,64,81,00,21,44,69,96,25,56,89,24,61,0,1,4,1,1,4,9};

int main()
{
	string t;
	int i, flag = 0, f = 0;
	long long res = 0;
	int a[10];
	while(cin >> t)
	{
		if(t == ".")break;
		for(i = 0; i < 30; i++)
		{
			if(s[i] == t)
			{
				a[f++] = val[i];
				flag = 1;
			}
		}
	}
	sort(a, a + f);
	for(i = 0; i < f; i++)
    {
		res *= 100;
		res += a[i];
    }
    cout << res << endl;
	return 0;
 } 
