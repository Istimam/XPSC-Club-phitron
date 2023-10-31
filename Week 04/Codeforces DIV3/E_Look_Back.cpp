#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    double ar[n];
    For(i,0,n)
    {
        cin >> ar[i];
    }
    ll multiplications = 0, dc = 0;
    For(i,1,n)
    {
        if(ar[i-1] > ar[i])
        {
            dc = max(0.0,ceil(log2(ar[i - 1] / ar[i])));
            // cout << dc << '\n';
            // dc = max(0.0, dc + ceil(log2(L[i] / L[i + 1]))),c += dc;
            // cout<<number_of_multiplications<<'\n';
            multiplications += dc;
            ar[i] *= pow(2, dc);
        }
    }
    cout << multiplications << '\n';
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,n) for(int i=0;i<n;i++)
// main()
// {
//     long long t, n, c, dc;
//     cin >> t;
//     rep(_,t)
//     {
//         cin >> n;
//         double L[n];
//         rep(i, n)
//             cin >> L[i];

//         c = 0, dc = 0;
//         rep(i, n - 1)
//             dc = max(0.0, dc + ceil(log2(L[i] / L[i + 1]))),c += dc;
//         cout << c << '\n';
//     }
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() 
// {
//     double larger_number, smaller_number;
//     cin >> larger_number;
//     cin >> smaller_number;

//     int number_of_multiplications = ceil(log2(larger_number / smaller_number));

//     cout << number_of_multiplications << endl;

//     smaller_number *= pow(2, number_of_multiplications);
//     cout << smaller_number << endl;

//     return 0;
// }
