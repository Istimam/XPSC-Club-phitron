#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int arr[x+1];
        int odd = 0,even = 0;
        FOR(i,1,x+1)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd == x || even == x)
        {
            cout << "YES" << endl;
        }
        else
        {
            int evenIndexN = 0;
            int oddIndexN = 0;
            if(x%2 == 0)
            {
                evenIndexN = x / 2;
                oddIndexN = x / 2;
            }
            else
            {
                evenIndexN = x / 2;
                oddIndexN = x / 2 + 1;
            }
            // cout << evenIndexN << " " << oddIndexN;
            even = 0, odd = 0;
            for (int i = 1; i <= x; i = i+2)
            {
                if(arr[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            int odd2 = 0, even2 = 0;
            for (int i = 2; i <= x; i = i+2)
            {
                if(arr[i] % 2 == 0)
                {
                    even2++;
                }
                else
                {
                    odd2++;
                }
            }
            // cout << even << " " << odd << endl;
            // cout << even2 << " " << odd2;
            if(arr[1] % 2 == 0)
            {
                if(oddIndexN == even && evenIndexN == odd2)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
                if(oddIndexN == odd && evenIndexN == even2)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            {
                
            }
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// #define FOR(i,A,b) for(int i = (A); i < (b); i++)
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n + 1];
//         int odd = 0,even = 0;
//         FOR(i,1,n+1)
//         {
//             cin >> arr[i];
//             if(arr[i]%2 == 0)
//             {
//                 even++;
//             }
//             else
//             {
//                 odd++;
//             }
//         }
//         if(even == n || odd == n)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             for (int i = 1; i <= n; i+=2)
//             {
//                 arr[i]++;
//             }
//             even = 0,odd = 0;
//             FOR(i,1,n+1)
//             {
//                 if(arr[i]%2 == 0)
//                 {
//                     even++;
//                 }
//                 else
//                 {
//                     odd++;
//                 }
//             }
//             if(even == 0 || odd == 0)
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    FOR(i,0,n)
    {
        cin >> a[i];
        a[i] % 2;
    }
    int x = a[0], y = a[1];
    for (int i = 0; i < n; i+=2)
    {
        if(a[i] != x)
        {
            cout << "NO"<<endl;
            return;
        }
    }
    for (int i = 1; i < n; i+=2)
    {
        if(a[i] != y)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}