#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int minDiff(int arr[], int n, int m)
{
    sort(arr, arr+n);

    int mini_Diff = INT_MAX;
    
    for(int i=0; i+m-1<n; i++)
    {
        int diff = arr[i+m-1] - arr[i];
       if(diff<mini_Diff){
        mini_Diff = diff;
       }
    }
    return mini_Diff;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;

    cout<<minDiff(arr, n, m);
    return 0;

}