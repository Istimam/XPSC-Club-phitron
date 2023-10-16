// #include <bits/stdc++.h>
// #define FOR(i, A, B) for (int i = (A); i < (B); i++)
// using namespace std;
// int gcd(int a, int b) 
// {
//     if (b == 0) return a;
//     return gcd(b, a % b);
// }
// int main() 
// {
//     int k;
//     cin >> k;
//     long long cnt = 0;
//     FOR(i, 1, k + 1) 
//     {
//         FOR(j, 1, k + 1) {
//             FOR(l, 1, k + 1) {
//                 int gcd_1 = gcd(i, j);
//                 int gcd_final = gcd(gcd_1, l);
//                 cnt += gcd_final;
//             }
//         }
//     }
//     cout << cnt << '\n';
//     return 0;
// }
#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
struct Triple 
{
    int first;
    int second;
    int third;
};
const int MAX_K = 200;
int gcd_cache[MAX_K + 1][MAX_K + 1][MAX_K + 1];
int gcd(int a, int b) 
{
    if (b == 0) 
    {
        return a;
    }
    if (gcd_cache[a][b][0] != 0) 
    {
        return gcd_cache[a][b][0];
    }
    gcd_cache[a][b][0] = gcd(b, a % b);
    return gcd_cache[a][b][0];
}
int main() {
    int k;
    cin >> k;
    vector<Triple> v;
    FOR(i, 1, k + 1) 
    {
        FOR(j, 1, k + 1) 
        {
            FOR(l, 1, k + 1) 
            {
                v.push_back({i, j, l});
            }
        }
    }
    int cnt = 0;
    for (auto i : v) 
    {
        int gcd_value = gcd(i.first, gcd(i.second, i.third));
        cnt += gcd_value;
    }
    cout << cnt << '\n';
    return 0;
}
