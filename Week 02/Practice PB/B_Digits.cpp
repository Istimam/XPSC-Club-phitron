#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, b;
    cin >> n >> b;
    int cnt = 0;
    while (n != 0)
    {
        cnt++;
        n /= b;
    }
    cout << cnt;
    return 0;
}