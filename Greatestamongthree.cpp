#include <iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"Enter three numbers"<<endl;
   cin>>a>>b>>c;
   if(a>b && a>c)
   cout<<a<<": is gratest"<<endl;
   else if(b>a && b>c)
   cout<<b<<": is gratest"<<endl;
   else
   cout<<c<<": is gratest"<<endl;

    return 0;
}