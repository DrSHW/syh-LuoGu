#include<bits/stdc++.h>
using namespace std;

int c[10][5][3]=
{
	{
		'X','X','X',
		'X','.','X',
		'X','.','X',
		'X','.','X',
		'X','X','X',
	},
	{
		'.','.','X',
		'.','.','X',
		'.','.','X',
		'.','.','X',
		'.','.','X',
	},
	{
		'X','X','X',
		'.','.','X',
		'X','X','X',
		'X','.','.',
		'X','X','X',
	},
	{
		'X','X','X',
		'.','.','X',
		'X','X','X',
		'.','.','X',
		'X','X','X',
	},
	{
		'X','.','X',
		'X','.','X',
		'X','X','X',
		'.','.','X',
		'.','.','X',
	},
	{
		'X','X','X',
		'X','.','.',
		'X','X','X',
		'.','.','X',
		'X','X','X',
	},
	{
		'X','X','X',
		'X','.','.',
		'X','X','X',
		'X','.','X',
		'X','X','X',
	},
	{
		'X','X','X',
		'.','.','X',
		'.','.','X',
		'.','.','X',
		'.','.','X',
	},
	{
		'X','X','X',
		'X','.','X',
		'X','X','X',
		'X','.','X',
		'X','X','X',
	},
	{
		'X','X','X',
		'X','.','X',
		'X','X','X',
		'.','.','X',
		'X','X','X',
	}
};
char str[105];
int a[105];

int main()
{
	int n, k;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> str[i];
		a[i] = str[i] - '0';
	}
	for(int i = 0; i < n; i++)
	{
		for(k = 0; k < 3; k++) 
			cout << (char)c[a[i]][0][k];
		if(i != n-1) cout << '.';
	}
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		for(k = 0; k < 3; k++) 
			cout << (char)c[a[i]][1][k];
		if(i != n-1) cout << '.';
	}
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		for(k = 0; k < 3; k++) 
			cout << (char)c[a[i]][2][k];
		if(i != n-1) cout << '.';			
	}
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		for(k = 0; k < 3; k++) 
			cout << (char)c[a[i]][3][k];
		if(i != n-1) cout << '.';
	}
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		for(k = 0; k < 3; k++) 
			cout << (char)c[a[i]][4][k];
		if(i != n-1) cout << '.';
	}
	return 0;
}
