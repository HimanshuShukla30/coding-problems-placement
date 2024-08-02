#include <iostream>
using namespace std;

void fibo(int n)
{
    if(n<1)
    return;
    
    static int curr =0,prev=1,last =0;
    curr = prev + last;
    last = prev;
    prev = curr;
    cout<<curr <<" ";
    fibo(n-1);
}

int main() {
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"0 "<<"1 ";
    fibo(n-2);

    return 0;
}