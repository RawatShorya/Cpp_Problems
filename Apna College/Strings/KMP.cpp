#include<iostream>
#include<vector>
using namespace std;

vector<int> prefix_function(string s)
{
    int n = s.length();
    vector<int> pi(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(s.substr(0, j) == s.substr(i-j+1, j))
            {
                pi[i] = j;
            }
        }
    }
    return pi;
}

/*
int n =s.length();
	    vector<int>pi(n, 0);
	    for(int i=1;i<n;i++)
	    {
	        int j = pi[i-1];
	        while(j>0 && s[i]!=s[j])
	        {
	            j=pi[i-1];
	        }
	        if(s[i] == s[j]){
	            j++;
	        }
	        pi[i] = j;
	    }
	    
	    int x = pi[0];
	    for(int i=0;i<n;i++)
	    {
	        x = max(x, pi[i]);
	    }
	    
	    return x;
*/

int main()
{
    string s;
    cin>>s;
    vector<int> ans = prefix_function(s);
    for(int i=0;i<s.length();i++)
    {
        cout<<ans[i]<<" ";
    }
}