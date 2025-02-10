#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int fact=1;
    while(n!=0){
        fact=fact*n;
        n--;
    }
   cout<<"Factorial: "<<fact;
    return 0;
}
