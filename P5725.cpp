#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, i;
	cin >> n;
	for(i = 1; i <= n*n; i++)
	{
		if(i != 1 && i % n == 1)
			cout << endl;
		if(i <= 9) printf("0%d", i);
		else printf("%d",i);
	}
	cout << endl;
	cout << endl;
	int s = 1, j, cnt = 1;
	for(i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n - i; j ++) 
		{ 
			printf("  ");
		}
		while(cnt <= i * (i + 1) / 2) 
		{
     		if(cnt < 10)  printf("0%d", cnt); 
       		else printf("%d", cnt); 
    	    cnt ++;
    	}
    	cout << endl;
	}
	return 0;
}

