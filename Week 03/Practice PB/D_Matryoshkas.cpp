#include <bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        multiset<int> ss;
        For(i, 0, n) {
            int x;
            cin >> x;
            ss.insert(x);  // Insertion into multiset has O(log(N)) complexity
        }
        int cnt = 0;

        while (!ss.empty()) {
            cnt++;
            multiset<int>::iterator it = ss.begin();
            int x = *it;

            // Find and erase contiguous elements
            while (true) {
                multiset<int>::iterator next = ss.find(x + 1);  // Searching has O(log(N)) complexity
                if (next != ss.end()) {
                    x = *next;
                    ss.erase(next);  // Erasing has O(log(N)) complexity
                } else {
                    break;
                }
            }

            // Remove the initial element
            ss.erase(it);  // Erasing has O(log(N)) complexity
        }
        cout << cnt << '\n';
    }

    return 0;
}
