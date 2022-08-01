#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s = "na";
    string t = "Apna Collegena";

    int S = s.length();
    int T = t.length();

    for(int i=0;i < T - S + 1; i++)
    {
        if(t.substr(i, S) == s)
            cout<<"String at index i: "<<i<<endl;   
    }

    return 0;
}