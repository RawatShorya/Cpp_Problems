#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5, 4, 1, 2, 3};
    int n = 5;
    int i(1);
    while(i<n)
    {
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
        i++;
    }

    for(int k=0;k<n;k++)
        cout<<arr[k]<<" ";
}