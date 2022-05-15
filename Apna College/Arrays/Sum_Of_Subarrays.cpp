#include<iostream>
using namespace std;
int main()
{
    int n = 3;
    int a[n] = {1, 2, 2};
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum += a[j];
            cout<<sum<<" ";
        }
        sum = 0;
    }

}