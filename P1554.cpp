#include <bits/stdc++.h>

using namespace std;

int js[10], N, M;

int main()
{
	cin >> N >> M; 
	for(int i = N; i <= M; i++)
		for(int tmp = i; tmp; tmp /= 10)
			js[tmp % 10]++; 
	for(int i = 0; i <= 9; i++)
		cout << js[i] << " ";
	return 0;
}



