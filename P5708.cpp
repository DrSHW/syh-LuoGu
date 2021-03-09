#include<bits/stdc++.h>
using namespace std;

int main() 
{
	double a,b,c;
	double S;
	double p;
    while(cin >> a >> b >> c) 
    {
    	p=(a + b + c) / 2.0;
    	S=(float)sqrt(p * (p - a) * (p - b) * (p - c));
    	printf("%.1lf\n",S);	
	}
    return 0;
}




