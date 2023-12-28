#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
unordered_map<char, int> charCount;
bool isSemiPalindrome(string str) 
{
    for (char ch : str) {
        charCount[ch]++;
    }
    int oddCount = 0;
    for (auto pair : charCount) {
        if (pair.second % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount <= 1;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int fre [26] = {0};
    if(isSemiPalindrome(s)){
        cout << "YES" << nl;
    }
    else {
        For(j,1,s.size()-1){
            int h = s[j - 1];
            int i = s[j];
            int k = s[j +1];
            
        }
        cout << "NO" << nl;
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