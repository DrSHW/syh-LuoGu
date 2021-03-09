#include<bits/stdc++.h>
using namespace std;

int a[45][45] = {0};

int main()
{
	int n, r = 1, c;
	cin >> n;
	c = n / 2 + 1;
	a[r][c] = 1;
	for(int i = 2; i <= n * n; i++)
	{
		if(r == 1 && c != n)
		{
			r = n;
			a[r][++c] = i;
		}	
		else if(r != 1 && c == n)
		{
			c = 1;
			a[--r][c] = i;
		}
		else if(r == 1 && c == n)
		{
			a[++r][c] = i;
		}		
		else if(r != 1 && c != n)
		{
			if(a[r - 1][c + 1] == 0)
			{
				a[--r][++c] = i;
			}
			else
			{
				a[++r][c] = i;
			}
		}	
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}
	return 0;
 } 









//#include <iostream> 
//using namespace std;
//
//int a[40][40] = { 0 };
//
//int main() {
//    int n;
//    cin >> n;            
//    int step = 1;     // 填到几了
//    int posx, posy; // 上一个点坐标
//    while (step <= n * n) {
//        if (step == 1) 
//            a[posx = 1][posy = n / 2 + 1] = step++;
//        else if (posx == 1 && posy != n) 
//            a[posx = n][++posy] = step++;
//        else if (posx != 1 && posy == n) 
//            a[--posx][posy = 1] = step++;
//        else if (posx == 1 && posy == n) 
//            a[++posx][posy] = step++;
//        else if (posx != 1 && posy != n)
//            if (a[posx - 1][posy + 1] == 0)
//                a[--posx][++posy] = step++;
//            else
//                a[++posx][posy] = step++;
//    }
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= n; ++j)
//            cout << a[i][j] << " ";
//        cout << endl;
//    }
//    return 0;
//}


