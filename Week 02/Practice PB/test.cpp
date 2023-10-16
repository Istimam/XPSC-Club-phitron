// #include <bits/stdc++.h>
// using namespace std;

// set<string> timePalindromes;

// bool isPalindrome(const string& str) {
//     int left = 0;
//     int right = str.length() - 1;
//     while (left < right) {
//         if (str[left] != str[right]) {
//             return false;
//         }
//         left++;
//         right--;
//     }
//     return true;
// }

// void storePalindromes() {
//     for (int minutes = 0; minutes < 1440; minutes++) {
//         int hours = minutes / 60;
//         int mins = minutes % 60;
//         string time = (hours < 10 ? "0" : "") + to_string(hours) + (mins < 10 ? "0" : "") + to_string(mins);
//         if (isPalindrome(time)) {
//             timePalindromes.insert(time);
//         }
//     }
// }

// void solve(int h, int m, int t) {
//     int cnt = 0;
//     if (t % 60 != 0) {
//         int x = h, y = m;
//         while (true) {
//             y += t;
//             if (y > 59) {
//                 y -= 60;
//                 x++;
//                 if (x > 23) {
//                     x -= 24;
//                 }
//             }
//             string num1 = (x < 10 ? "0" : "") + to_string(x);
//             string num2 = (y < 10 ? "0" : "") + to_string(y);
//             string check = num1 + num2;
//             if (timePalindromes.count(check)) {
//                 cnt++;
//             }
//             if (x == h && y == m) {
//                 break;
//             }
//         }
//     } else {
//         int x = h, hr = t / 60;
//         while (true) {
//             x += hr;
//             if (x > 23) {
//                 x -= 24;
//             }
//             string num1 = (x < 10 ? "0" : "") + to_string(x);
//             string num2 = (m < 10 ? "0" : "") + to_string(m);
//             string check = num1 + num2;
//             if (timePalindromes.count(check)) {
//                 cnt++;
//             }
//             if (x == h) {
//                 break;
//             }
//         }
//     }
//     cout << cnt << '\n';
// }

// int main() {
//     storePalindromes();
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         int cy;
//         cin >> s >> cy;
//         int h = stoi(s.substr(0, 2));
//         int m = stoi(s.substr(3, 2));
//         solve(h, m, cy);
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    string s, s1;
    cin >> s >> s1;
    int i = 0;
    bool found = false;
    while (i <= s.size()-s1.size())
    {
        // cout << i << '\n';
        int k = i;
        for (int j = 0; j < s1.size();)
        {
            if(s[k] == s1[j])
            {
                k++;
                j++;
                if(j == s1.size())
                {
                    found = true;
                    i++;
                }
            }
            
            {
                i++;
                break;
            }
            // cout << j << '\n';
        }
    }
    if(found)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}