#include<iostream>
using namespace std;
int main()
{
    // int n = 7;
    // int arr[] = {0, 7, 4, 6, 8, 10, 11};

    int n = 3;
    int arr[] = {1, 2, 2};

    int diff = arr[0] - arr[1];
    int ans = 2;
    int currLen = 2;

    int j =2;
    while(j<n){
        if(diff == arr[j-1] - arr[j]){
            currLen++;
        }else{
            diff = arr[j-1] - arr[j];
            currLen = 2;
        }

        ans = max(currLen, ans);
        j++;
    }

    cout<<ans;

}