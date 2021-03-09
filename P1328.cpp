#include<bits/stdc++.h>

using namespace std;

int N, NA, NB;
int a[205] = {0};
int b[205] = {0};
int s[5][5];
	
int main()
{
	s[0][0]=0;
	s[0][1]=-1;
	s[0][2]=1;
	s[0][3]=1;
	s[0][4]=-1;
	s[1][0]=1;
	s[1][1]=0;
	s[1][2]=-1;
	s[1][3]=1;
	s[1][4]=-1;
	s[2][0]=-1;
	s[2][1]=1;
	s[2][2]=0;
	s[2][3]=-1;
	s[2][4]=1;
	s[3][0]=-1;
	s[3][1]=-1;
	s[3][2]=1;
	s[3][3]=0;
	s[3][4]=1;
	s[4][0]=1;
	s[4][1]=1;
	s[4][2]=-1;
	s[4][3]=-1;
	s[4][4]=0;
	cin >> N >> NA >> NB; 
	int i, j, sa = 0, sb = 0;
	for(i = 0; i < N; i++)
	{
		a[i] = -1;
		b[i] = -1;
	 }
	for(i = 0; i < NA; i++)
		cin >> a[i]; 
	for(i = 0; i < NB; i++)
		cin >> b[i];
	for(i = NA; i < N; i++)
		a[i] = a[i - NA];
	for(i = NB; i < N; i++)
		b[i] = b[i - NB]; 
	for(i = 0; i < N; i++)
	{
		if(s[a[i]][b[i]]==1)
			sa++;
		if(s[a[i]][b[i]]==-1)
			sb++;
	}
	cout << sa << ' ' << sb;
	return 0;
}


 
