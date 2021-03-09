#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    for(int i = 0; i < s1.length(); i++)
    {
    	s1[i] = tolower(s1[i]);
	}
	for(int i = 0; i < s2.length(); i++)
    {
    	s2[i] = tolower(s2[i]);
	}
	s1 = " " + s1 + " ";
	s2 = " " + s2 + " ";
	if(s2.find(s1) == string::npos)
		cout << -1 << endl;
	else
	{
		int a = s2.find(s1);
		int b = s2.find(s1), s = 0;
		while(b != string::npos)
		{
			s++;
			b = s2.find(s1, b + 1);
		}
		cout << s << ' ' << a << endl;
	}
    return 0;
}



