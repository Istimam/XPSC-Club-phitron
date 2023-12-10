#include<bits/stdc++.h>
#define For(i, A, B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
#define pp pair<int,char>
const int MOD = 1e9 + 7;
using namespace std;

void solve() {
    string s;
    cin >> s;
    stack<int> stackB;
    stack<int> stackb;
    set<int> del;
    For(i, 0, s.size()) {
        if (s[i] == 'b' && !stackb.empty()) {
            del.insert(stackb.top());
            stackb.pop();
        } else if (s[i] == 'B' && !stackB.empty()) {
            del.insert(stackB.top());
            stackB.pop();
        }
        if(s[i] == 'b' || s[i] == 'B')continue;
        if (s[i] >= 'a' && s[i] <= 'z') {
            stackb.push(i);
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            stackB.push(i);
        }
    }
    // sort(del.begin(), del.end());
    string ans = "";
    For(i,0,s.size()){
        if(s[i] == 'b' || s[i] == 'B')continue;
        if(del.find(i) == del.end()){
            ans += s[i];
        }
    }
    cout << ans << nl;
    // for(auto i:del){
    //     cout << i << ' ';
    // }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
