#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string "<<endl;
    getline(cin,s);
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
        s[i] = s[i]+32;
        cout<<s[i];
        }
        else if(s[i]>='a' && s[i]<='z'){
        s[i] = s[i]-32;
        cout<<s[i];
        }
    }
    return 0;
}