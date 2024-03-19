#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s="aaaabbbbbcc";
    int count = 1;
    vector<char> ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (ans.empty())
        {
            ans.push_back(s[i]);
        }
        else if (ans.back() == s[i] )
        {
            count++;
        }
        else if (ans.back() != s[i] )
        {
            ans.push_back(char(count+48));
            ans.push_back(s[i]);
            count = 1;
        }
    }
    ans.push_back(char(count+48));
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}