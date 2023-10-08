#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool alph[26] = {false};
        int cnt[26] = {0};
        int n;
        cin >> n;
        FOR(i,0,n)
        {
            char c;
            cin >> c;
            if(!alph[c-'A'])
            {
                cnt[c - 'A'] += 2;
                alph[c - 'A'] = true;
            }
            else
            {
                cnt[c - 'A']++;
            }
        }
        int sum = 0;
        FOR(i,0,26)
        {
            sum += cnt[i];
        }
        cout << sum << endl;
    }
    return 0;
}