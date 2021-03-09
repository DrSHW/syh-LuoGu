#include<bits/stdc++.h>

using namespace std;

vector<int> mul(vector<int> A, int b)
{
    vector<int> C;
    int t = 0;

    for(int i = 0; i < A.size(); i ++)
    {
        t += A[i] * b;
        C.push_back(t % 10);
        t /= 10;
    }

    while(t) 
    {
        C.push_back(t % 10);
        t /= 10;
    }
    return C;
}

int main()
{
    int t, n, k;
    cin >> t;
    while(t--)
    {
        vector<int> A;
        A.push_back(1);
        cin >> n >> k;
        int sum = 0;
        for(int i = 1; i <= n; i ++)
        {
           A = mul(A, i);
        }   
        for(int i = A.size() - 1; i >= 0; i --)
            if(A[i] == k) sum ++;
        cout << sum << endl;
    }
    return 0;
}
