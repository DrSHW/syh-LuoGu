#include <bits/stdc++.h> 
using namespace std;

int main()
{
    double f[50];
    int n, i;
    f[0] = 0;
    f[1] = 1;
    f[2] = 1;   
    cin >> n;
    for (i = 3; i <= n; i++)
    	f[i] = f[i-1] + f[i-2];  //��ʼʹ��쳲���������
    printf("%0.2lf", f[n]); //�����������λС��
    return 0;
}
