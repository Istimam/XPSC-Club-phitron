#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<string, int> twoGramFreq;
    int maxFreq = 0;
    string maxTwoGram;

    for (int i = 0; i < n - 1; ++i) {
        string twoGram = s.substr(i, 2);
        twoGramFreq[twoGram]++;

        if (twoGramFreq[twoGram] > maxFreq) {
            maxFreq = twoGramFreq[twoGram];
            maxTwoGram = twoGram;
        }
    }

    cout << maxTwoGram << endl;
    return 0;
}
