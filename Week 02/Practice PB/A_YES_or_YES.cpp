#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if(s[0] == 'Y' || s[0] == 'y')
        {
            if(s[1] == 'e' || s[1] == 'E')
            {
                if(s[2] == 'S' || s[2] == 's')
                {
                    cout << "YES" << '\n';
                }
                else
                    cout << "NO" << '\n';
            }
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }    
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;

//         // Convert the input string to uppercase for comparison
//         transform(s.begin(), s.end(), s.begin(), ::toupper);

//         if (s == "YES") {
//             cout << "YES" << '\n';
//         } else {
//             cout << "NO" << '\n';
//         }
//     }
//     return 0;
// }
