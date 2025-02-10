#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int n1=0,n2=1,next=0;
    cout<<n1<<n2;
    for(int i=2;i<n;i++){
        next=n1+n2;
        n1=n2;
        n2=next;
        cout<<next;
    }
    cout<<endl;
    cout<<"nth term of fibonacci is :"<<next;
    return 0;
}
