#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i = 0, j = 0, cnt = 0;
    int abc[26] = {0};
    while (j < s.size())
    {
        abc[s[j] - 'a']++;
        bool check = true;
        For(k,i,j)
        {
            if(s[i] != 1)
            {
                check = false;
                break;
            }
            i++;
        }
        if(check)
        {
            int d = j - i;
            cnt = max(cnt, d);
        }
        
        abc[s[i] - 'a']--;
        i++;
        
        j++;
    }
    cout << cnt;
    return 0;
}