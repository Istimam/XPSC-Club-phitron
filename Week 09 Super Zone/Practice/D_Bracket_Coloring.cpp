#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
#define pp pair<char, int>
const int MOD = 1e9 + 7;
using namespace std;
bool ans = true;
char chek(string& s,int n)
{
    stack<int> st;
    char c = '1';
    bool ok = false;
    For(i,0,n){
        if(s[i] == '('){
            st.push(i);
        }
        else if(!st.empty()){

            s[st.top()] = c;
            s[i] = c;
            ok = true;
            st.pop();
        }
    }
    for (int i = 0; i < n;i++)
    {
        if(!st.empty() && s[i] == ')'){
            if(ok)
                c = '2';
            s[i] = c;
            s[st.top()] = c;
            st.pop();
        }
    }
    for(auto i:s){
        if(i == '(' || i == ')')
        {
            cout << -1 << nl;
            ans = false;
            break;
        }
    }
    return c;
}
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    string ss = s;
    reverse(ss.begin(), ss.end());
    char c = chek(s, n);
    if(ans){
        char k = chek(ss, n);
        if(c < k){
            cout << c << nl;
            for(auto i:s)
            cout << i << ' ';
            cout << nl;
        }
        else{
            cout << k << nl;
            for(auto i:ss)
            cout << i << ' ';
            cout << nl;        
        }
    }
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