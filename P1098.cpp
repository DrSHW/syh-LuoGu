#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p1, p2, p3, t = 0;
	cin >> p1 >> p2 >> p3;
	string a;	
	cin >> a;
	cout << a[0];
	for(int i = 1; i < a.length() - 1 ;i++)
	{
		if(a[i] != '-') cout << a[i];
		if(a[i] == '-')
		{
			if(p1 == 2 && 'a' <= a[i-1] && a[i-1] <= 'z' && 'a' <= a[i+1] && a[i+1] <= 'z' && a[i-1] - a[i+1] < 0)
			{
				t = 0;
				for(int j = 0; j < a[i+1] - a[i-1] - 1; j++)
				{
					if(p3==1)
					{
						for(int k = 0; k < p2;k++)
						{
							cout << (char)(a[i-1] + t + 1 - 'a' + 'A');
						}
					}
					else	
						for(int k = 0; k < p2;k++)
						{
							cout << (char)(a[i+1] - t - 1 - 'a' + 'A');
						}
					t++;
				}
			}
			else if(p1 == 2 && '0' <= a[i-1] && a[i-1] <= '9' && '0' <= a[i+1] && a[i+1] <= '9'  && a[i-1] - a[i+1] < 0)
			{
				t = 0;
				for(int j = 0; j < a[i+1] - a[i-1] - 1; j++)
				{
					if(p3 == 1)
					{
						for(int k = 0; k < p2;k++)
						{
							cout << (char)(a[i-1] + t + 1);
						}
					}
					else
					for(int k = 0; k < p2;k++)
						{
							cout << (char)(a[i+1] - t - 1);
						}
				}
			}
			else if(p1 == 2 && 'a' <= a[i-1] && a[i-1] <= 'z' && 'a' <= a[i+1] && a[i+1] <= 'z'  && a[i-1] - a[i+1] < 0)
			{
				t = 0;
				for(int j = 0; j < a[i+1] - a[i-1] - 1; j++)
				{
					if(p3 == 1)
					{
						for(int k = 0; k < p2;k++)
						{
							cout << (char)(a[i-1] + t + 1);
						}
					}
					else
					for(int k = 0; k < p2;k++)
						{
							cout << (char)(a[i+1] - t - 1);
						}
					t++;
				}
			}
			else if(p1 == 1 && '0' <= a[i-1] && a[i-1] <= '9' && a[i+1] >= '0' && a[i+1] <= '9' && a[i-1] - a[i+1] < 0)
			{
				t = 0;
				for(int j = 0; j < a[i+1] - a[i-1] - 1; j++)
				{
					if(p3 == 1)
					{
						for(int k = 0; k < p2;k++)
						{
							cout << (char)(a[i-1] + t + 1);
						}
					}
					else
					for(int k = 0; k < p2;k++)
						{
							cout << (char)(a[i+1] - t - 1);
						}
					t++;
				}
			}
			else if(p1 == 1 && 'a' <= a[i-1] && a[i-1] <= 'z' && a[i+1] >= 'a' && a[i+1] <= 'z' && a[i-1] - a[i+1] < 0)
			{
				t = 0;
				for(int j = 0; j < a[i+1] - a[i-1] - 1; j++)
				{
					if(p3 == 1)
					{
						for(int k = 0; k < p2;k++)
						{
							cout << (char)(a[i-1] + t + 1);
						}
					}
					else
					for(int k = 0; k < p2;k++)
						{
							cout << (char)(a[i+1] - t - 1);
						}
					t++;
				}
			}
			else if(p1 == 3 && 'a' <= a[i-1] && a[i-1] <= 'z' && a[i+1] >= 'a' && a[i+1] <= 'z' && a[i-1] - a[i+1] < 0)
			{
				for(int j = 0; j < a[i+1] - a[i-1] - 1; j++)
				{
					for(int k = 0; k < p2;k++)
					{
						cout << '*';
					}
				}
			}
			else if(p1 == 3 && '0' <= a[i-1] && a[i-1] <= '9' && a[i+1] >= '0' && a[i+1] <= '9' && a[i-1] - a[i+1] < 0)
			{
				for(int j = 0; j < a[i+1] - a[i-1] - 1; j++)
				{
					for(int k = 0; k < p2;k++)
					{
						cout << '*';
					}
				}
			}
			else 
				cout << '-';
		}	
	}
	cout << a[a.length()-1] << endl;
	return 0;
}







