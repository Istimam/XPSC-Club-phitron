#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int k = s1.size();
    int n=s2.size();
    int freq[26] = {0};
    // For(i,0,k)
    // {
    //     freq[s1[i] - 'a']++;
    // }
    for(char c:s1)
    {
        freq[c - 'a']++;
    }
    int i = 0, j = 0, cnt = 0;
    int freq2[26] = {0};
    while (j<n)
    {
        // if(!freq[j]-'a')
        // {
            freq2[s2[j] - 'a']++;
        // }
        if(j >= k-1)
        {
            int match = 0;
            // bool tmp = true;
            // For(l,0,26)
            For(l,0,k)
            {
                if(freq[s1[l]-'a'] == freq2[s1[l]-'a'])
                {
                    // tmp = false;
                    // break;
                    match++;
                }
                else
                {
                    break;
                }
            }
            if(k == match)
                cnt++;
                freq2[s2[i] - 'a']--;
                i++;
        }
        j++;
    }
    cout << cnt << '\n';
    return 0;
}