#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,i,r;
    cout<<"Enter the number= ";
    cin>>num;
    for(i=num;num>0;num/=10)
    {
        r=i%10;
        rev=rev*10+r;
    }
    cout<<"Reverse of the number is: "<<rev;
    return 0;
}