#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
map<string, bool> timePalindromes;
bool isPalindrome(const string& str) 
{
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) 
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
void storeAndCheckPalindromes() 
{
    for (int minutes = 0; minutes < 1440; minutes++) 
    {
        int hours = minutes / 60;
        int mins = minutes % 60;
        string time = (hours < 10 ? "0" : "") + to_string(hours) + (mins < 10 ? "0" : "") + to_string(mins);
        bool isPal = isPalindrome(time);
        timePalindromes[time] = isPal;
    }
}
void solve(int h,int m,int t)
{
    int cnt = 0;
    if(t%60 != 0)
    {
        int x = h, y = m;
        while(true)
        {
            y += t;
            while(y > 59)
            {
                y -= 60;
                x++;
                if(x > 23)
                {
                    x -= 24;
                }
            }
            stringstream ss,ss1;
            ss << setw(2) << setfill('0') << x;
            ss1 << setw(2) << setfill('0') << y;
            string num1 = ss.str(), num2 = ss1.str();
            string check = num1 + num2;
            if(timePalindromes[check])
                cnt++;
            if(x == h && y == m)
            {
                break;
            }
        }
    }
    else
    {
        int x = h, hr = t / 60;
        while (true)
        {
            x += hr;
            if(x > 23)
            {
                x -= 24;
            }
            stringstream ss,ss1;
            ss << setw(2) << setfill('0') << x;
            ss1 << setw(2) << setfill('0') << m;
            string num1 = ss.str(), num2 = ss1.str();
            string check = num1 + num2;
            if(timePalindromes[check])
            {
                cnt++;
            }
            if(x == h)
            {
                break;
            }
        }
    }
    cout << cnt << '\n';
}
int main()
{
    storeAndCheckPalindromes();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int cy;
        cin >> s >> cy;
        int h = stoi(s.substr(0, 2));
        int m = stoi(s.substr(3, 2));
        solve(h, m, cy);
    }
    
    return 0;
}