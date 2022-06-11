#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[n];
    }
    const int N = 10;//1e6+2 = 10^8
    bool temp[N];
    for(int i=0;i<N;i++)
    {
        temp[i] = false;
    }
    for(int i = 0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            temp[arr[i]] = 1;
        }
    }
    int ans=-1;
    for(int i=1;i<N;i++)
    {
        if(temp[i] == 0){
            ans = i;
            break;
        }
    }

    cout<<ans<<endl;
    return 0;
}