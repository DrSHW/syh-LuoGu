#include<bits/stdc++.h>

using namespace std;

struct STU
{
	string s;
	int a;
	int sc;
};

int main()
{
	int n;
	cin >> n;
	struct STU stu[1000];
	for(int i = 0; i < n; i++)
	{
		cin >> stu[i].s >> stu[i].a >> stu[i].sc;
		stu[i].a++;
		if(stu[i].sc*1.2 >= 600) 
			stu[i].sc =600;
		else 
			stu[i].sc *= 1.2;
	}
	for(int i = 0; i < n; i++)
	{
		cout << stu[i].s << ' ' << stu[i].a << ' ' << stu[i].sc << endl;
	}
	return 0;
}

