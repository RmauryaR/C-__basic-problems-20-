
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Eneter a string:"<<endl;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
        cout<<s[i];
        else
        continue;
    }

    return 0;
}
