#include<iostream>
#include<map>
using namespace std;

void printDups(string s)
{
    map<char, int> count;
    for(int i=0;i<s.size();i++)
    {
        count[s[i]]++;
    }

    for(auto it: count)
    {
        if(it.second>1)
            cout<<it.first<<" "<<it.second<<endl;
    }
}

int main()
{
    string s = "test string";
    printDups(s);
    return 0;
}