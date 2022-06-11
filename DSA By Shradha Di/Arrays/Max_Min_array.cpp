#include<iostream>
using namespace std;

class Pair{
    public:
    int min;
    int max;
};

Pair getMinMax(int arr[], int n)
{
    Pair minmax;

    if(n == 1){
        minmax.min = arr[0];
        minmax.max = arr[1];
        return minmax;
    }

    if(arr[0]>arr[1]){
        minmax.min = arr[1];
        minmax.max = arr[0];
    }else{
        minmax.min = arr[0];
        minmax.max = arr[1];
    }

    for(int i =2;i<n; i++)
    {
        minmax.min = min(minmax.min, arr[i]);
        minmax.max = max(minmax.max, arr[i]);
    }

    return minmax;

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    Pair p = getMinMax(arr, n);
    cout<<p.min<<" "<<p.max;

}