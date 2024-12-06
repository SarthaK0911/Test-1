#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the numbers= ";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"The largest number is: "<<a;
    }
    else if(b>a&&b>c)
    {
        cout<<"The largest number is: "<<b;
    }
    else if(c>a&&c>b)
    {
        cout<<"The largest number is: "<<c;
    }
    else if(a==b&&a>c||a==c&&a>b||b==c&&b>a)
    {
        cout<<"Two number are same and are the largest!";
    }
    else
    {
        cout<<"All numbers are same";
    }
    return 0;
}