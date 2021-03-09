#include<bits/stdc++.h>

using namespace std;

int main()
{
	char c;
	int w[100000] = {0};
	int n1 = 0, n2 = 0, m1 = 0, m2 = 0, i = 0;
	while(cin >> c)
	{
		if(c == 'W')
			w[i++] = 1;
		if(c == 'L')
			w[i++] = 2;
		if(c == 'E')
			break;
	}
	for(i = 0; w[i] ; i++)
	{
		if(w[i] == 1)
		{
			n1++;
		}
		if((n1 >= 11 || n2 >= 11) && (n2 - n1 >= 2 || n1 - n2 >= 2))
		{
			cout << n1 << ':' << n2 << endl;
			n1 = 0;
			n2 = 0;
		}
//		cout << n1 << endl;
		if(w[i] == 2)
		{
			n2++;
		}
		if((n1 >= 11 || n2 >= 11) && (n2 - n1 >= 2 || n1 - n2 >= 2))
		{
			cout << n1 << ':' << n2 << endl;
			n1 = 0;
			n2 = 0;
		}
	}
	cout << n1 << ':' << n2 << endl << endl;
	for(i = 0; w[i] ; i++)
	{
		if(w[i] == 1)
		{
			m1++;
		}
		if((m1 >= 21 || m2 >= 21) && (m2 - m1 >= 2 || m1 - m2 >= 2))
		{
			cout << m1 << ':' << m2 << endl;
			m1 = 0;
			m2 = 0;
		}
		if(w[i] == 2)
		{
			m2++;
		}
		if((m1 >= 21 || m2 >= 21) && (m2 - m1 >= 2 || m1 - m2 >= 2))
		{
			cout << m1 << ':' << m2 << endl;
			m1 = 0;
			m2 = 0;
		}
	}
	cout << m1 << ':' << m2 << endl;
	return 0;
}






 
