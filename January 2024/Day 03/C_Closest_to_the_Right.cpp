#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    For(i, 0, n) cin >> v[i];
    while (q--)
    {
        int x;
        cin >> x;
        int l = -1, r = n;
        while (l+1 < r)
        {
            int mid = l + (r - l) / 2;
            if(v[mid] >= x){
                r = mid;
            }
            else{
                l = mid;
            }
        }
        cout << r+1 << NL;
    }
    return 0;
}