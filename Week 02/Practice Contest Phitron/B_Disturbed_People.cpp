#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define pp pair<int,int>
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    For(i, 0, n) cin >> v[i];
    int cnt = 0;
    For(i,1,n-1){
        if(v[i] == 0){
            if(v[i-1] == 1 && v[i+1] == 1){
                cnt++;
                v[i + 1] = 0;
            }
        }
    }
    cout << cnt << nl;
    return 0;
}