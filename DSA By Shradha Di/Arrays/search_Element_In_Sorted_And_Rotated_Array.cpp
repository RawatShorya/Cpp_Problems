#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int low, int high, int key)
{
    if(high<low)
        return -1;
    
    int mid = (low + high)/2;
    if(arr[mid] == key)
        return mid;
    if(arr[mid] > key)
        return binarySearch(arr, n, low, mid-1, key);
    return binarySearch(arr, n, mid+1, high, key);
}

int findPivot(int arr[], int low, int high)
{
    if(high<low)
        return -1;
    if(high == low)
        return low;
    
    int mid = (low+high)/2;

    if(mid<high && arr[mid]>arr[mid+1])
        return mid;
    if(low<mid && arr[mid-1]>arr[mid])
        return mid-1;
    if(arr[low]>=arr[mid])
        return findPivot(arr, low, mid-1);
    return findPivot(arr, mid+1, high);
}

int pivotedBinarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n-1;

    int pivot = findPivot(arr, low, high);

    if(pivot == -1)
        return binarySearch(arr, n, 0, n-1,key);
    if(arr[pivot] == key)
        return pivot;
    if(arr[0] > key)
        return binarySearch(arr, n, pivot+1, n-1, key);
    return binarySearch(arr, n, 0, pivot-1, key);
}

int main()
{
    int arr[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i =0; i<n; i++)
    // {
    //     cin>>arr[n];
    // }
    // int key;
    // cin>>key;
    cout<<pivotedBinarySearch(arr, n, key);

}