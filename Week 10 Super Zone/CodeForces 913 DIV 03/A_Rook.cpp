#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char c = s[0];
        char cc=s[1];
        char l = 'a';
        For(i,1,9){
            if(i == s[1]-'0')continue;
            cout << s[0] << i << nl;
        }
        For(i,0,8){
            if(l != c){

            cout << l << cc << nl;
            }
            l++;
        }

    }
    
    return 0;
}