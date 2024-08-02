#include <iostream>
using namespace std;
int main(){
    int n, curr=0, prev=1, last=0;  
    cout<<"enter the number: ";
    cin>>n;
    cout<<last<<" "<<prev<<" ";
    for(int i=1; i<=n;i++) {
        curr = prev + last;
        last = prev;
        prev = curr;
        cout<<curr<<" ";
    }
}