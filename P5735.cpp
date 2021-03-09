#include<bits/stdc++.h>

using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double dis1, dis2 ,dis3;
	dis1 = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	dis2 = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
	dis3 = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
	double s = dis1 + dis2 + dis3;
	printf("%.2lf", s);
	return 0;
 } 
