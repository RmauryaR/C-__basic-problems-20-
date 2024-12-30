#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cout<<"Enter a string"<<endl;
   getline(cin,s);
   for(int i=0;i<s.size();i++){
       if(s[i]==' ')
       continue;
       else
       cout<<s[i];
   }
    return 0;
}