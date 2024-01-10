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
        int l = 0, r = n;
        bool ok = false;
        while (l<=r)
        {
            int mid = l + (r - l)/ 2;
            if(v[mid] == x)
            {
                ok = true;
                break;
            }
            else if(v[mid] > x){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        if(ok){
            cout << "YES" << NL;            
        }
        else
        cout << "NO" << NL;
    }
    return 0;
}