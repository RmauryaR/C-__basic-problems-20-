#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    int gcd;
    if(a>b){
        for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
   } 
   else
   {
       for(int i=1;i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
   }
   cout<<gcd;
    return 0;
}
