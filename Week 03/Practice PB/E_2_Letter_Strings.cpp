#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<string> vs(n);
    int freq0[26] = {0};
    int freq1[26] = {0};
    for (int i = 0; i < n;i++)
    {
        string s;
        cin >> s;

        freq0[s[0] - 'a']++;
        freq1[s[1] - 'a']++;
    }
    // long long cnt = 0;
    // for (int i = 0; i < n-1; i++)
    // {
    //     int freq[26] = {0};
        
    // }
    // cout << cnt<<'\n';
    For(i,0,26)
    {
        cout << freq0[i] << " " << freq1[i] << '\n';
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