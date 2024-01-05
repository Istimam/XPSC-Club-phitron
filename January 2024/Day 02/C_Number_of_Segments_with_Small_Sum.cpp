#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    ll n, s;
    cin >> n >> s;
    vector<int> v(n);
    For(i, 0, n){
        cin >> v[i];
    }
    ll j = 0, i = 0, sum = 0, cnt = 0;
    while (j<n)
    {
        sum += v[j];
        while (sum > s)
        {
            sum -= v[i];
            i++;
        }
        cnt += j - i + 1;
        j++;
    }
    cout << cnt << NL;
    return 0;
}