#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, d;
    cin >> t >> d;
    int cnt = 0;
    while (t--)
    {
        int x;
        cin >> x;
        if(x%d == 0)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}9,738,937,215