#include<bits/stdc++.h>

using namespace std;

int main() 
{
	char c[13];
	int arr[9];
	int j = 0;
	cin >> c;
	int result;
	if(c[12] != 'X')
		result = c[12] - '0';
	else result = 'X';
	for(int i = 0; i < 11; i++)
	{
		if(c[i] >= '0' && c[i] <= '9')
		{
			arr[j] = c[i] - '0';
			j++;
		}
	}
	int sum = 0;
	j = 1;
	for(int i = 0; i < 9; i++)
	{
		sum += arr[i] * j;
		j++;
	}
	if(sum % 11 == 10)
	{
		if(result == 'X') 
			cout << "Right" << endl;
		else 
		{
			c[12] = 'X';
			cout << c << endl;
		} 
	}
	else if(sum % 11 == result)
	{
		cout << "Right" << endl;
	}
	else
	{
		c[12] = sum % 11 + '0';
		cout << c << endl;
	}
	return 0;
}





	
