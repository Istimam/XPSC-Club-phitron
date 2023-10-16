#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    int n;
    long long k;
    cin >> n >> k;
    long long ar[n];
    For(i,0,n)
    {
        cin >> ar[i];
    }

    int i = 0, j = 0;
    long long s = 0;
    int dif = INT_MIN;
    while (j<n)
    {
        s += ar[j];
        while(s > k)
        {
            s -= ar[i];
            i++;
        }
        if(s == k)
        {
            int d = (j - i) + 1;
            dif = max(dif, d);
        }
        j++;
    }
    cout << dif << '\n';
    return 0;
}