#include<bits/stdc++.h>

using namespace std;

int s[100]= {0};
int main()
{
	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	int i, j, k;
	int sum;
	for(i = 1; i <= s1; i++)
	{
		for(j = 1; j <= s2; j++)
		{
			for(k = 1; k <= s3; k++)
			{
				sum = i + j + k;
				s[sum] ++;
			}
		}
	}
	int max = 0, sign;
	for(i = 3; i <= 80; i++)
	{
		if(s[i] > max)
		{
			max = s[i];
			sign = i;
		}
	}
	cout << sign << endl;
	return 0;
}
