#include<iostream>
using namespace std;
int main()
{
int a,b,i,j,f=0,sum=0;
cout<<"Enter range=";
cin>>a>>b;
for(i=a;i<=b;i++)
{
for(j=1;j<=i;j++)
{
if(i%j==0)
f++;
}
if(f==2)
cout<<i<<"\t";
f=0;
}
sum=sum+i;
cout<<"\n"<<i;
}
