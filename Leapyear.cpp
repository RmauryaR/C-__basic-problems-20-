#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a year: "<<endl;
    cin>>n;
    if(n%4==0)
    cout<<"Leap year"<<endl;
    else
    cout<<"Not a leap year";

    return 0;
}