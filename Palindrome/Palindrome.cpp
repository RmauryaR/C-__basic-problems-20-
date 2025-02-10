#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int temp=n;
    int rev=0;
    while(n>0){
        rev =rev*10 + n%10;
        n=n/10;
    }
    cout<<"reverse:"<<rev<<endl;
    if(temp==rev)
    cout<<"Palindrome"<<endl;
    else
    cout<<"Not a Palindrome";

    return 0;
}
