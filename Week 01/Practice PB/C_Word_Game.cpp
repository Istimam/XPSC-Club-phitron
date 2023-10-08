#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cin.ignore();
        map<string, int> word_count;
        map<string, vector<int>> word_lines;
        for (int i = 1; i <= 3; i++)
        {
            string line;
            getline(cin, line);
            stringstream ss(line);
            string word;
            while (ss >> word) 
            {
                word_count[word]++;
                word_lines[word].push_back(i);
            }
        }
        int p[4]={0};
        for (const auto& pair : word_count) 
        {
            string word = pair.first;
            int count = pair.second;
            if(count == 1)
            {
                p[word_lines[word].front()] += 3;
            }
            else if(count == 2)
            {
                for(int i : word_lines[word])
                {
                    p[i] ++;
                }
            }
        }
        cout << p[1] << " " << p[2] << " " << p[3] << '\n';
    }
    return 0;
}