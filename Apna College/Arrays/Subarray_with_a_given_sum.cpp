#include<iostream>
using namespace std;
int main()
{
    int s;
    int n;
    cin>>n;
    cin>>s;
    int arr[n];
    int st = 0;
    int en = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0,j=0,sum=0;
    while(j<n && sum+arr[j]<=s)
    {
        sum+=arr[j];
        j++;
    }
    if(sum == s)
    {
        cout<<i+1<<" "<<j;
    }
    while(j<n)
    {
        sum+=arr[j];
        while(sum>s)
        {
            sum-=arr[i];
            i++;
        }

        if(sum == s)
        {
            st = i+1;
            en = j+1;
            //cout<<i+1<<" "<<j;
            break;
        }

        j++;
    }

    cout<<st<<" "<<en;
}