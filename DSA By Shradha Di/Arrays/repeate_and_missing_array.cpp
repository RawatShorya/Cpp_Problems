#include<iostream>
using namespace std;

void missingRepating(int arr[], int n)
{
    //swap sort
    //o(n), o(1)
    int i=0;
    while(i<n){
        if(arr[i] != arr[arr[i]-1])
        {
            swap(arr[i], arr[arr[i]-1]);
        }else{
            i++;
        }
    }

    for(int j=0;j<n;j++)
    {
        if(arr[j] != (j+1)){
            cout<<"Missing: "<<j+1<<endl;
            cout<<"Repeating: "<<arr[j]<<" ";
            break;
        }
    }
}

int main()
{
    int arr[] = {3, 1, 2, 3, 5};
    missingRepating(arr, 5);
}