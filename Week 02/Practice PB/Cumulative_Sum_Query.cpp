#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n] = {0};
    int count = 0;
    FOR(i,0,n)
    {
        int x;
        cin >> x;
        count += x;
        arr[i] = count;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int i, j;
        cin >> i >> j;
        if(i == 0)
        {
            cout << arr[j] << '\n';
        }
        else
        {
            cout << arr[j] - arr[i - 1] << '\n';
        }
    }
    return 0;
}