#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n,f;
    cout<<"Enter the positive integer= ";
    cin>>n;
    f=fact(n);
    cout<<"The factorial of "<<n<<" is: "<<f;
    return 0;
}
int fact(int n)
{
    if(n==1||n==0)
    return 1;
    else
 return n*fact(n-1);
}