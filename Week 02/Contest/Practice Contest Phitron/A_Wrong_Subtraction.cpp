#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    while (k--)
    {
        int s = n % 10;
        if(s == 0)
        {
            n /= 10;
        }
        else
        {
            n--;
        }
    }
    cout << n;
    return 0;
}