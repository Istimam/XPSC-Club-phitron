#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
bool isVowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool canReachCODETOWN(const std::string& source, const std::string& target) {
    if (source.size() != target.size()) {
        return false; // Strings must have the same length
    }

    for (int i = 0; i < source.size(); ++i) {
        char sourceChar = source[i];
        char targetChar = target[i];

        if ((isVowel(sourceChar) && isVowel(targetChar)) ||
            (!isVowel(sourceChar) && !isVowel(targetChar))) {
            // Valid transition
            continue;
        } else {
            return false; // Invalid transition
        }
    }

    return true; // All transitions are valid
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        std::string source, target="CODETOWN";
        // std::cout << "Enter the source string: ";
        std::cin >> source;

        if (canReachCODETOWN(source, target)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    

    return 0;
}
