#include<bits/stdc++.h>
using namespace std;
int N;
string str,end;
string r90(string rect)
{
    string ret = rect;
    for (int i = 0;i<N;i++)
    {
        for (int j = 0;j<N;j++)
        {
            ret[j*N+N-1-i] = rect [i*N+j];
        }
    }
    return ret;
}
string r180(string rect)
{
    return (r90(r90(rect)));
}
string r270(string rect)
{
    return r90(r90(r90(rect)));
}
string fz (string rect)
{
    string ret = rect;
    for (int i = 0;i<N;i++)
    {
        for (int j = 0;j<N;j++)
        {
            ret[i*N+j] = rect [i*N+(N-j-1)];
        }
    }
    return ret;
}
int main ()
{
    cin >>N;
    string tmp;
    for (int i = 0;i<N;i++)
    {
        cin >>tmp;
        str += tmp;
    }
    for (int i = 0;i<N;i++)
    {
        cin >>tmp;
        end += tmp;
    }
    if (r90(str) == end){
        cout <<1;
    }else if (r180(str) == end){
        cout <<2;
    }else if (r270(str) == end){
        cout <<3;
    }else if ((tmp = fz (str)) == end){
        cout <<4;
    }else if (r90(tmp) == end || r180(tmp) == end || r270(tmp) == end){
        cout <<5;
    }else if (str == end){
        cout <<6;
    }else{
        cout <<7;
    }
    return 0;
}
//#include<bits/stdc++.h>
//
//using namespace std;
//
//char c1[12][12];
//char c2[12][12];
//char b[12][12];
//char d[12][12];
//int n;
//
//int r1()
//{
//	int i, j, flag = 1;
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			b[i][j] = c1[i][j];
//		}
//	}
//	char temp;
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			temp = b[i][j];
//			b[i][j] = b[j][n - i - 1];
//			b[j][n - i - 1] = temp;
//		}
//	}
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			if(b[i][j] != c2[i][j])
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	return flag;
//}
//
//int r2()
//{
//	int i, j, flag = 1;
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			b[i][j] = c1[i][j];
//		}
//	}
//	char temp;
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			temp = b[i][j];
//			b[i][j] = b[n - i - 1][n - j - 1];
//			b[n - i - 1][n - j - 1] = temp;
//		}
//	}
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			if(b[i][j] != c2[i][j])
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	return flag;
//}
//
//int r3()
//{
//	int i, j, flag = 1;
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			b[i][j] = c1[i][j];
//		}
//	}
//	char temp;
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			temp = b[i][j];
//			b[i][j] = b[n - j - 1][i];
//			b[n - j - 1][i] = temp;
//		}
//	}
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			if(b[i][j] != c2[i][j])
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	return flag;
//}
//
//int r4()
//{
//	int i, j, flag = 1;
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			b[i][j] = c1[i][j];
//		}
//	}
//	char temp;
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			temp = b[i][j];
//			b[i][j] = b[i][n - j - 1];
//			b[i][n - j - 1] = temp;
//		}
//	}
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			if(b[i][j] != c2[i][j])
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	return flag;
//}
//
//int r5()
//{
//	int i, j;
//	r4();
//	for(i = 0; i < n; i++)
//	{ 
//		for(j = 0; j < n; j++)
//		{
//			c1[i][j] = b[i][j];   
//			d[i][j] = b[i][j];   
//     		if(r1())
//     		return 1;
//		}
//	}
//    for(i = 0; i < n; i++)
//	{ 
//		for(j = 0; j < n; j++)
//		{
//			c1[i][j] = d[i][j];    
//     		if(r2())
//     		return 1;
//		}
//	}
//    for(i = 0; i < n; i++)
//	{ 
//		for(j = 0; j < n; j++)
//		{
//			c1[i][j] = d[i][j];      
//     		if(r3())
//     		return 1;
//		}
//	}
//    return 0;
//}
//
//int r6()
//{
//	int i, j, flag = 1;
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			b[i][j] = c1[i][j];
//			d[i][j] = c2[i][j];
//		}
//	}
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			if(b[i][j] != d[i][j])
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	return flag;
//}
//
// 
//int main()
//{
//	int i, j;
//	cin >> n;
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			cin >> c1[i][j];
//		}
//	}
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			cin >> c2[i][j];
//		}
//	}
//	if(r6())
//	{
//		cout << 6;
//		return 0;
//	}
//	else if(r1())
//	{
//		cout << 1;
//		return 0;
//	}
//		
//	else if(r2())
//	{
//		cout << 2;
//		return 0;
//	}
//	else if(r3())
//	{
//		cout << 3;
//		return 0;
//	}
//	else if(r4())
//	{
//		cout << 4;
//		return 0;
//	}
//	else if(r5())
//	{
//		cout << 5;
//		return 0;
//	}
//	cout << 7;
//	return 0;
//}




