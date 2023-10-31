#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    For(i,0,n)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int l = 0, r = n - 1;
    int ans = -1;
    while (l <= r)
    {
        // int mid = (l + r) / 2; /*Possibllity of overflow*/
        int mid = l + (r - l) / 2;
        if(a[mid] == x)
        {
            ans = mid;
            // cout << mid << '\n';
            // break; /*if i only want the numbers any index*/

            /*if i want first occurence*/
            r = mid - 1;
            /*if i want Last occurence*/
            // l = mid + 1;
        }
        else if(x < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}