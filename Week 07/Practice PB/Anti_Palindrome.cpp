#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
unordered_map<char, int> charCount;
vector<int> v(26,0);
pair<string,bool> isSemiPalindrome(string str) 
{
    int sz = str.size() / 2;
    // cout << sz << nl;
    for (char ch : str) {
        v[ch - 'a']++;
        // charCount[ch]++;
    }
    string s;
    int oddCount = 0;
    for (int i = 0; i < 26; i++)
    {
        if(v[i] != 0){
            for (int j = 0; j < 26; j++)
            {
                if((i != j) && (sz - v[i] == v[j] || sz - v[i] == 0)){
                    oddCount += v[i];
                    s += i + 'a';
                    sz -= v[i];
                }
            }
            
        }
    }
    // for (auto pair : charCount) {  
    //     for(auto ss:charCount){
    //         if((ss.first != pair.first) && (sz - pair.second == ss.second || sz - pair.second == 0)){
    //             oddCount += pair.second;
    //             s += pair.first;
    //             sz -= pair.second;
    //         }
    //     }
    // }
    // cout << oddCount << nl;
    if(oddCount == str.size()/2){
        return {s, true};
    }
    return {s, false};
} 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if((n&1) == 0){
        pair<string,bool> pp = isSemiPalindrome(s);
        if(pp.second){
            cout << "YES" << nl;
            string sss = "";
            for(auto ch:pp.first){
                int x = v[ch - 'a'];
                sss += to_string(x), ch;
                v[ch - 'a'] = 0;
            }
            for (int i = 0; i < 26; i++)
            {
                if(v[i] > 0){
                    char cha = i + 'a';
                    sss += to_string(v[i]), cha;
                    v[i] = 0;
                }
            }
            cout << sss << nl;
            // cout << nl;
        }
        else
            cout << "NO" << nl;
    }
    else{
        cout << "NO" << nl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        charCount.clear();
        solve();
    }
    return 0;
}