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
    string s;
    cin >> s;
    char c = 'a';
    vector<int> cntMin;
    For(i,0,26){
        if(s.find(c) != string::npos){
            int l = 0, h = n-1, cnt = 0;
            bool ok = false;
            while (l<h)
            {
                if(s[l] == s[h]){
                    l++;
                    h--;
                    continue;
                }
                else if(s[l] == c){
                    cnt++;
                    l++;
                }
                else if(s[h] == c){
                    h--;
                    cnt++;
                }
                else{
                    ok = true;
                    break;
                }
            }
            if(!ok){
                cntMin.push_back(cnt);
            }
        }
        c++;
    }
    if(cntMin.empty()){
        cout << -1 << nl;
    }
    else{
        cout << *min_element(cntMin.begin(), cntMin.end()) << nl;
    }
    // for(auto i:cntMin)
    //     cout << i << ' ';
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