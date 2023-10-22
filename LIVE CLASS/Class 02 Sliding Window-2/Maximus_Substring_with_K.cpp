#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int k;
    cin >> k;
    int i = 0, j = 0, freq[26] = {0}, uniq = 0;
    int mx = INT_MIN;
    while (j<n)
    {
        freq[s[j] - 'a']++;
        if(freq[s[j] - 'a'] == 1)
        {
            uniq++;
        }
        while (uniq > k)
        {
            freq[s[i] - 'a']--;
            if(freq[s[i] - 'a'] == 0)
            {
                uniq--;
            }
            i++;
        }
        if(uniq == k)
        {
            mx = max(j - i + 1, mx);
            // cout << j - i + 1 << '\n';
        }
        j++;
    }
    cout << mx;
    return 0;
}