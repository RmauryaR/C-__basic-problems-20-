#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int temp=0, sumtemp=0;
    int original=n;
    while(n>0){
        temp = n%10;
        sumtemp += temp*temp*temp;
        n=n/10;
    }
    if(sumtemp==original)
    cout<<"Armstrong number"<<endl;
    else
    cout<<"Not an Armstrong";

    return 0;
}
