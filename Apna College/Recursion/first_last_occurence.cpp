#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int i, int key)
{
    if(i == n)
        return -1;
    if(arr[i] == key)
        return i;
    return firstOcc(arr, n, i+1, key);
}

int secOcc(int arr[], int n, int i, int key)
{
    if(i == -1)
        return -1;
    return secOcc(arr, n, i+1, key);
    if(arr[i] == key)
    {
        return i;
    }

}

int main()
{
    int n = 7;
    int arr[] = {4, 2, 1, 2, 5, 2, 7};

    // cout<<firstOcc(arr, n, 0, 2);
    cout<<secOcc(arr, n, n-1, 2);
}