#include <iostream>
#include <unordered_set>

using namespace std;

// Function to find all possible non-empty substrings
void findAllSubstrings(const string& s, unordered_set<string>& substrings) {
    int n = s.length();

    // Apply the given operations and add the generated substrings to the set
    for (int i = 0; i < n; ++i) {
        string newString = s;
        
        // Remove the first character
        newString.erase(0, 1);
        substrings.insert(newString);

        // Remove the second character
        newString = s;
        newString.erase(1, 1);
        substrings.insert(newString);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        unordered_set<string> substrings;

        // Add the original string
        substrings.insert(s);

        // Find all possible non-empty substrings for the current test case
        findAllSubstrings(s, substrings);

        // Output the count of distinct non-empty substrings
        cout << substrings.size() - 1 << endl;  // Subtract 1 to exclude the empty string
    }

    return 0;
}
