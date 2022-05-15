#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n = 7;
    // cin>>n;
    int a[] = {1, 5, 3, 4, 3, 5, 6};
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }

    int N = 1000;
    int idx[N];

    for(int i=0;i<N;i++){
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[a[i]] != -1){
            minidx = min(minidx, idx[a[i]]);
        }else{
            idx[a[i]] = i;
        }
    }

    if(minidx == INT_MAX){
        cout<<"No Repeating Element"<<endl;
    }else{
        cout<<minidx+1;
    }


}