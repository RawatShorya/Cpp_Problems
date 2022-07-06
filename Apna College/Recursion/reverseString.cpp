#include<iostream>
using namespace std;

void reverseStr(string n)
{
    if(n.length() == 0)
    {
        return;
    }
    reverseStr(n.substr(1));
    cout<<n[0]<<" ";
}

int main()
{
    string n;
    cin>>n;
    reverseStr(n);
}