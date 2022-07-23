#include<iostream>
#include<algorithm>
using namespace std;

// bool isThere(int arr[], int n, int key)
// {
//     sort(arr, arr+n);
//     int l =0, r = n-1, sum =0;
//     while(l<=r){
//         sum = arr[l] + arr[r];
//         if(sum == key)
//             return true;
//         else if(sum > key){
//             r--;
//         }else{
//             l++;
//         }
//     }

//     return false;

// }

bool isThere(int arr[], int n, int key)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            break;
        }
    }

    int l = (i+1)%n;
    int r = i;

    while(l != r)
    {
        int sum = arr[l] + arr[r];
        if(sum == key)
            return true;
        else if(sum < key){
            l = (l+1)%n;
        }else{
            r = (n+r-1)%n;
        }
    }
    return false;
}

int main()
{
    int n=6;
    int arr[n] = {11, 15, 6, 8, 9, 10};
    cout<<isThere(arr, n, 55);
}