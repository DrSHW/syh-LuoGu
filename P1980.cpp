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
/*RE����*/ 
#include<bits/stdc++.h>
using namespace std;
  
int main()
{
	long long n, x;
    cin >> n >> x;
    stringstream ss;
    for (n++; --n; ss << n);     //��1~n��ֵ����ŵ��ַ�������
    string s = ss.str();
    cout << count(s.begin(), s.end(), x + '0') << endl;    //����count����ֱ�ӳ��������򵥵�
    return 0;
}



