#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a numer"<<endl;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0)
        count++;
    }
    if(count==2)
    cout<<"Prime number"<<endl;
    else
    cout<<"Non Prime";
    return 0;
}