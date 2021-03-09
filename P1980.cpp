//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	long long n, i, cal = 0;
//	int k, c;
//	cin >> n >> k;
//	int b;
//	for(i = 1; i <= n; i++)
//	{
//		b = i;
//		while(b)
//		{
//			c = b % 10;
//			b /= 10;
//			if(c == k)
//				cal++;
//		}
//	}
//	cout << cal << endl;
//	return 0;
//}
/*RE代码*/ 
#include<bits/stdc++.h>
using namespace std;
  
int main()
{
	long long n, x;
    cin >> n >> x;
    stringstream ss;
    for (n++; --n; ss << n);     //把1~n的值都存放到字符串流中
    string s = ss.str();
    cout << count(s.begin(), s.end(), x + '0') << endl;    //运用count函数直接出结果，简简单单
    return 0;
}



