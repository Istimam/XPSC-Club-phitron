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
    int i = 0, sum = 0, j = 0;
    int mx = INT_MIN;
    
    while (j<n)
    {
        sum += ar[j];
        if(j >= k-1)
        {
            mx = max(mx, sum);
            sum -= ar[i];
            i++;
        }
        j++;
    }
    cout << mx;
    return 0;
}