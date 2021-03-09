#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    
    if (T == 1) 
	{
        cout << "I love Luogu!";
    } 
    
	else if (T == 2) 
	{
		int a1 = 2 + 4, a2 = 10 - 2 - 4;
        cout << a1 << " " << a2;
    } 
    
	else if (T == 3) 
	{
        int s = 14, n = 4;
        int a1 = s / n;
        cout << a1 << endl;
        int a2 = a1 * n;
        cout << a2 << endl;
        int a3 = s - a2;
        cout << a3 << endl;
    } 
    
	else if (T == 4) 
	{
        double a = 500.0 / 3;
        printf("%6.3lf\n", a);
        //cout<<fixed<<setprecision(3)<<1.0*500/3;
    } 
    
	else if (T == 5) 
	{
        int a = (260 + 220)/(10 + 20);
        cout << 15 ;
    } 
    
	else if (T == 6) 
	{
        cout << sqrt((double)(6*6 + 9*9)) << endl;
    } 
   
	else if (T == 7) 
	{
        int s = 100;
        int a1 = s + 10;
        cout << a1 << endl;
        int a2 = a1 - 20;
        cout << a2 << endl;
        cout << 0 << endl;
        
    } 
    
	else if (T == 8) 
	{
        const double PI = 3.141593;
        int r = 5;
        double C = 2.0*PI*r;
        cout << C << endl;
        double S = 1.0*PI*r*r;
        cout << S << endl;
        double V = 4.0/3*r*r*r*PI;
        cout << V << endl;
    }
    
	else if (T == 9)
	{
        int a = ((((1+1)*2+1)*2+1)*2);
        cout << a << endl;
    } 
	else if (T == 10) 
	{
        cout << 9 << endl;
    } 
	else if (T == 11) 
	{
        double a = 1.0 * 100 / (8 - 5);
		cout << a << endl;
    } 
	else if (T == 12) 
	{
		int a1 = 'M' - 'A' + 1; 
        cout << a1 << endl;
		char a2 = 'A' + 18 - 1;
		cout << a2 << endl; 
    } 
    
	else if (T == 13) 
	{
        const double PI = 3.141593;
        int r1 = 4, r2 = 10;
        int V = 4.0/3*r1*r1*r1*PI + 4.0/3*r2*r2*r2*PI;
        int a = (int)(pow(V , 1.0*1/3));
        cout << a << endl;
    } 
	else if (T == 14) 
	{
		int s = 0;
		int a;
        for(int i = 110; i > 0; i--)
        {
        	s = i * (10 + 110 - i);
        	if(s == 3500)
        	{
        		a = i;
			}
		}
		cout << a << endl;
    }
    return 0;
}










