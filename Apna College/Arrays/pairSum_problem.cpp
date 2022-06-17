// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int s;
//     cin>>s;
//     int arr[n];
//     for(int i=0; i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     bool ans = 0;
//     for(int i = 0; i<n-1; i++)
//     {
//         for(int j =i+1; j<n;j++)
//         {
//             if(arr[i] + arr[j] == s){
//                 cout<<i<<" "<<j;
//                 ans = 1;
//             }
//         }
//     }
//     cout<<endl;
//     cout<<ans;
// }


// Optimized Approach 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }
    bool status = false;
    int s = 0;
    int e = n-1;
    while(s<e)
    {
        if(arr[s] + arr[e] == k){
            cout<<s<<" "<<e<<endl;
            status = true;
            cout<<status;
            return 0;
        }else if(arr[s] + arr[e] > k){
            e--;
        }else{
            s++;
        }
    }
    cout<<status;
    return 0;
}