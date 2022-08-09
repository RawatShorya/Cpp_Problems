#include<iostream>
#include<vector>
#include<climits>
using namespace std;

string LCP(vector<string> str)
{
    string ans;
    int n = str.size();
    if(n == 0)
        return "";
    if(n == 1)
        return str[0];
    
    int mn = INT_MAX;

    for(int i=0;i<n;i++)
    {
        int x = str[i].size();
        mn = min(mn, x);
    }

    for(int i = 0; i<mn; i++)
    {
        char ch = str[0][i];
        for(int j=1; j<n; j++)
        {
            if(ch != str[j][i])
                return ans;
        }
        ans+=ch;
    }
    return ans;
}

int main()
{
    vector<string>str = {"flo", "fl", "flow"};
    cout<<LCP(str);
}