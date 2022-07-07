#include<iostream>
using namespace std;

string moveXatEnd(string s)
{
    if(s.length() == 0)
        return "";

    char ch = s[0];
    string ans = moveXatEnd(s.substr(1));

    if(ch == 'x')
    {
        return ans+ch;
    }else{
        return ch+ans;
    }
}

int main()
{
    cout<<moveXatEnd("axbxcxdx");
}