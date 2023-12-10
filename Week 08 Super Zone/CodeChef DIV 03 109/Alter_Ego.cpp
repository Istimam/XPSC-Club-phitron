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
    vector<int> even,odd;
    int od = 0;
    For(i,0,n){
        int x;
        cin >> x;
        if((x&1) == 1){
            od++;
            odd.push_back(x);
        }
        else
            even.push_back(x);
    }
    if((od&1) == 1){
        cout << -1 << nl;
        return;
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    vector<int> sum, sub;
    int i = 0, j = even.size() - 1;
    while (i<j)
    {
        int xsum = (even[i] + even[j]) / 2;
        sum.push_back(xsum);
        i++;
        j--;
    }
    i = 0, j = even.size() - 1;
    while (i<j)
    {
        int xsub = (abs(even[i] - even[j])) / 2;
        sub.push_back(xsub);
        i++;
        j--;
    }
    int ii = 0, jj = odd.size() - 1;
    while (ii<jj)
    {
        int xsum = (odd[ii] + odd[jj]) / 2;
        sum.push_back(xsum);
        ii++;
        jj--;
    }
    ii = 0, jj = odd.size() - 1;
    while (ii<jj)
    {
        int xsub = (abs(odd[ii] - odd[jj])) / 2;
        sub.push_back(xsub);
        ii++;
        jj--;
    }
    sort(sum.begin(), sum.end());
    sort(sub.begin(), sub.end());
    for (int k = sum.size()-1; k >= 0; k--)
    {
        cout << sum[k] << ' ';
    }
    for (int k = sub.size()-1; k >= 0; k--)
    {
        cout << sub[k] << ' ';
    }
    cout << nl;
    return;
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