//Time Complexity = O(n^2)

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5, 4, 1, 2, 3};
    int n = 5;
    for(int i =0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[i])
                swap(arr[i], arr[j]);
        }
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}