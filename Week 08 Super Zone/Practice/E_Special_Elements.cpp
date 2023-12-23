#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    vector<int> vv(8005, 0);
    For(i,0,n-1){
        int sum = 0;
        sum += v[i];
        For(j,i+1,n){
            sum += v[j];
            if(sum > n){
                break;
            }
            vv[sum]++;
        }
    }
    int unq = 0;
    for(auto i:v){
        if(vv[i] > 0)
            unq++;
    }
    cout << unq << nl;
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