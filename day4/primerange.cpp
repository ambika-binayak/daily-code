#include<iostream>
using namespace std;
int main()
{
int n,i,j,f=0;
cout<<"Enter range=";
cin>>n;
for(i=1;i<=n;i++)
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
}
