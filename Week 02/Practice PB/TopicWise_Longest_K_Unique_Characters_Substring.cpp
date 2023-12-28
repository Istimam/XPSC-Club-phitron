#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;

    set<char> uniqueCharacters;
    vector<int> frequency(26, 0);

    int i = 0, j = 0, maxLen = -1;

    while (j < s.size()) {
        uniqueCharacters.insert(s[j]);
        frequency[s[j] - 'a']++;

        if (uniqueCharacters.size() == k) {
            maxLen = max(maxLen, j - i + 1);
        }

        while (uniqueCharacters.size() > k) {
            frequency[s[i] - 'a']--;

            if (frequency[s[i] - 'a'] == 0) {
                uniqueCharacters.erase(s[i]);
            }

            i++;
        }

        j++;
    }
    cout << maxLen << nl;
    return 0;
}
