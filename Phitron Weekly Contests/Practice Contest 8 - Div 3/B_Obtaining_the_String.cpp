#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    vector<int> v;
    For(i,0,n){
        if(s[i] != t[i]){
            bool ok = false;
            int x;
            for (int j = i+1; j < n; j++)
            {
                if(s[j] == t[i]){
                    ok = true;
                    x = j;
                    break;
                }
            }
            if(!ok) {
                cout << -1 << nl;
                return 0;
            }
            while (x > i)
            {
                cnt++;
                swap(s[x], s[x - 1]);
                // char tmp = s[x];
                // s[x] = s[x - 1];
                // s[x - 1] = tmp;
                x--;
                v.push_back(x + 1);
            }
        }
    }
    cout << cnt << nl;
    for(auto i:v){
        cout << i << ' ';
    }
    return 0;
}