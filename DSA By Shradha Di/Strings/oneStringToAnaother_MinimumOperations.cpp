#include<iostream>
#include<vector>
using namespace std;

int calculation(string a, string b)
{
    int n = a.length(), m = b.length();
    if(m != n)
        return -1;
    
    vector<int>v(26, 0);
    for(int i=0;i<n;i++)
    {
        v[a[i]]++;
    }
    for(int i=0;i<n;i++)
        v[b[i]]--;
    
    for(int i=0;i<n;i++)
    {
        if(v[i])
            return -1;
    }

    int res = 0;
    for(int i=n-1;int j = n-1; i>=1)
    {
        while(i>=1 && a[i] != b[j]){
            i--;
            res++;
        }
        if(i>=1){
            i--;
            j--;
        }
    }
    return res;
}

int main()
{
    cout<<"Hello";
    // string a = "HELLO";
    // string b = "LLEHO";
    // cout<<"Min No. of Operations: "<<calculation(a, b);
}