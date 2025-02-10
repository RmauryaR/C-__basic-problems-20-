#include <iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string"<<endl;
    getline(cin,s);
    int n = s.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        count++;
    }
    cout<<"Number of vowels are: "<<count;
    return 0;
}
