#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int>v;
    for(int i =0;i<n;i++){
        v.push_back(arr[i]);
    }

    sort(v.begin(), v.end());

    for(int i =1; i<n;i++)
    {
        if(v[i] == v[i-1]){
            cout<<1;
            return 0;
        }
    }
    cout<<0;
    return 0;
}