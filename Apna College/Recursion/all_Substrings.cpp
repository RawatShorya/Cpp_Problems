#include<iostream>
using namespace std;

void allSubstrings(string s, string ans)
{
    if(s.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    allSubstrings(ros, ans);
    allSubstrings(ros, ans+ch);

}

int main()
{
    allSubstrings("ABC", "");
    cout<<endl;
}