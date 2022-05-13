#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int n = 6;
    // cin>>n;

    int arr[] = {0, -9, 1, 3, -4, 5};
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    int mx = INT_MIN;

    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
        cout<<mx<<" ";
    }

}