#include<iostream>
using namespace std;
int main()
{
    int n = 8;
    // cin>>n;
    int arr[] = {1, 2, 0, 7, 2, 0, 2, 2};

    int ans = 0;
    int mx = -1;

    for(int i=0; i<n-1; i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
        }
        mx = max(arr[i], mx);
    }

    cout<<ans;

}