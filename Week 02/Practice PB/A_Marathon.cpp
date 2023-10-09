#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int arr[4];
        FOR(i,0,4)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        FOR(i,0,4)
        {
            if(arr[i] > arr[0])
            {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}