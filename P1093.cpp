#include<bits/stdc++.h>

using namespace std;

struct data {
    int num;
    int ch, ma, en;
    int sum;
};

bool cmp(data A, data B)
{
    if(A.sum != B.sum) return A.sum > B.sum;
    if(A.ch != B.ch) return A.ch > B.ch;
    if(A.num != B.num) return A.num < B.num;
    return true; 
}

int main()
{
    int n;
    data s[305];
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        scanf("%d%d%d", &s[i].ch, &s[i].ma, &s[i].en);
        s[i].num = i;
        s[i].sum = s[i].ch + s[i].ma + s[i].en;
    }
    sort(s + 1, s + 1 + n, cmp);
    for(int i = 1; i <= 5; i++)
        cout << s[i].num << ' ' << s[i].sum << endl;
    return 0;
}