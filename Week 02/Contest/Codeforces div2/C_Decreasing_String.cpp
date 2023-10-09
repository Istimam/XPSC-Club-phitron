#include <iostream>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        string s1;
        int pos;

        cin >> s1 >> pos;

        int length_s1 = s1.length();
        string s2 = s1.substr(0, 1);  // Initialize s2 with the first character of s1

        // Build the string s2 following the lexicographically minimal rule
        for (int i = 1; i < length_s1; i++) {
            if (s1[i] < s1[i - 1]) {
                break;
            }
            s2 += s1[i];
        }

        // Calculate the length of the final string S
        int length_S = s2.length() * (length_s1 - s2.length() + 1);

        // Calculate the position of the character in string S
        if (pos > length_S) {
            cout << s1[pos - length_S - 1];  // Character not in s2
        } else {
            // Calculate the position within s2
            int pos_in_s2 = (pos - 1) % s2.length();
            
            // Output the character from s2 at the calculated position
            cout << s2[pos_in_s2];
        }
    }

    return 0;
}
