#include<iostream>
using namespace std;

int fibonacci(int n)
{
    //f(n) = f(n-1)+f(n-2)
    if(n == 0 || n == 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
} 

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);
}