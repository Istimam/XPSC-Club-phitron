#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    For(i,0,n)
    {
        cin >> ar[i];
    }
    int k;
    cin >> k;
    int mx = INT_MIN;

    /*Brute Force which can lead to TLE*/

    For(i,0,n-k+1) /*O(n-k)   if n=10^5*/
    {
        int s = 0;
        For(j,i,i+k) /*O(k)  if n=10^5*/
        {
            s += ar[j];
        }
        mx = max(s, mx);
        // cout<<s<<'\n';
    }
    cout << mx;
    return 0;
}