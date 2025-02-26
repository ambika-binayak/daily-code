#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a,b,i,j,s=0,n,r;
cout<<"Enter range=";
cin>>a>>b;
for(i=a;i<=b;i++)
{
for(j=a;j<=i;j++)
n=i;
while(n>0)
{
    r=n%10;
    s=(s+(r*r*r));
    n=n/10;
}
if(s==i)
cout<<i<<"\t";
s=0;
}
}
