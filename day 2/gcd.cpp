#include<iostream>
using namespace std;
main()
{
int i,a,b,gcd;
cout<<"Enter two number";
cin>>a>>b;
for(i=1;i<=a&&i<=b;i++)
{
if(a%i==0&&b%i==0)
gcd=i;
}
cout<<"GCD="<<gcd;
}
