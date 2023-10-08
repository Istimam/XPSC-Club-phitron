/*Brute Force Method*/
/*Time complexity O(n*k)*/
// #include<bits/stdc++.h>
// #define FOR(i,a,b) for(int i = (a); i < (b); i++)
// using namespace std;
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int arr[n];
//     FOR(i, 0, n)
//     {
//         cin >> arr[i];
//     }
//     int j;
//     long long ans = INT_MIN;
    // FOR(i, 0, n-k+1) /*O(n)*/
//     {
//         long long sum = 0;
        // FOR(j,i,i+k)  /*O(k)*/
//         {
//             sum += arr[j];
//         }
//         ans = max(sum, ans);
//     }
//     cout << ans;
//     return 0;
// }

#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    FOR(i,0,n)
    {
        cin >> a[i];
    }
    int j = 0, i = 0;
    long long sum = 0, ans = LONG_MIN;
    while(j < n)
    {
        sum += a[j];
        if(j>=k-1)
        {
            ans = max(ans, sum);
            sum -= a[i];
            i++;
        }
        j++;
    }
    cout << ans << endl;
    return 0;
}