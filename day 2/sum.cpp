#include<iostream>
using namespace std;
main()
{
int r,n,sum=0;
cout<<"Enter number";
cin>>n;
while(n>0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
cout<<"sum="<<sum;
}

