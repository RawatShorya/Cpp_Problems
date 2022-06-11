// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<string>
// using namespace std;
// int main()
// {
//     int n = 6;
//     // cin>>n;
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     string s;
//     s = "Hello";
//     // for(int i = 0; i<n; i++)
//     // {
//     //     cin>>arr[i];
//     // }
//     vector<int> v;
//     for(int i =0; i<n; i++)
//     {
//         v.push_back(arr[i]);
//     }
    
//     reverse(v.begin(), v.end());
//     reverse(s.begin(), s.end());

//     for(int i =0; i<n; i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     for(int i =0; i<n; i++)
//     {
//         cout<<s[i];
//     }

// }

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    int s =0, e = n-1;
    while(s<=e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    for(int i =0; i<n; i++)
    {
        cout<<arr[i];
    }
}