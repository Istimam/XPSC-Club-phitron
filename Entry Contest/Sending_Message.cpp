#include<bits/stdc++.h>
using namespace std;
bool sent(string word1,string word2)
{
    int i = 0, j = 0;
    int len1 = word1.length();
    int len2 = word2.length();
    while (i < len1 && j < len2)
    {
        if(word1[i] == word2[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    return j == len2;
}
int main()
{
    string word1, word2;
    while (cin>>word1>>word2)
    {
        if(sent(word1,word2))
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}