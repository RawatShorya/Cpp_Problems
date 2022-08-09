#include<iostream>
#include<vector>
using namespace std;

int length(string s)
{
    vector<int>dict(256, -1);
    int start(-1), ans(0);
    for(int i=0;i<s.size();i++)
    {
        if(dict[s[i]]>start)
            start = dict[s[i]];
        dict[s[i]] = i;

        ans = max(ans, i-start);
    }

    return ans;
}

int main()
{
    string s="aaaaa";
    cout<<length(s);
}