#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int sum=0;
    while(n!=0){
        sum=sum+n;
        n--;
    }
    cout<<sum;
    return 0;
}
