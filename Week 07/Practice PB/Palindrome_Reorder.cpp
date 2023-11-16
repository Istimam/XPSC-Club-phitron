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
void generatePallindrome(string s)
{
    string oddChar;
    string pallindrome;
    for(auto i:charCount){
        char ch = i.first;
        int cnt = i.second;
        if(cnt%2 != 0){
            oddChar = ch;
            cnt--;
        }
        for (int i = 0; i < cnt/2; i++)
        {
            pallindrome += ch;
        }
    }
    string x = pallindrome;
    reverse(x.begin(), x.end());
    if(oddChar.empty()){
        pallindrome += x;
    }
    else{
        pallindrome += oddChar;
        pallindrome += x;
    }
    cout << pallindrome << nl;
} 
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    bool pp = isSemiPalindrome(s);
    if(pp){
        generatePallindrome(s);
    }
    else{
        cout << "NO SOLUTION" << nl;
    }
}
int main()
{
    solve();
    return 0;
}
