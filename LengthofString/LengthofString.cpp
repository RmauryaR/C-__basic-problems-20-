#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"enter a string"<<endl;
    cin>>s;
    int i=0;
    int count =0;
    while(s[i]!=0){
        count++;
        i++;
    }
  cout<<count;
    return 0;
}
