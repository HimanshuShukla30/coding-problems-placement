#include <iostream>
using namespace std;

bool isPrime(int n , int i=2 ) {
    if( n<=2 )
    return (n==2)? true: false;
    if(n % i == 0)
    return false;
    if( i*i > n)
    return true;
}

int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;
    if( isPrime(n) )
    cout<<"Prime";
    else
    cout<<"Not a prime";
    return 0;
}