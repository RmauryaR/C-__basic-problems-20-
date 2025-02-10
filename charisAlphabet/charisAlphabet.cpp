#include <iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character"<<endl;
    cin>>c;
    if(c>='A' && c<='Z' || c>='a' && c<='z')
    cout<<"Character is alphabet"<<endl;
    else
    cout<<"Character is not a alphabegt"<<endl;
    return 0;
}
