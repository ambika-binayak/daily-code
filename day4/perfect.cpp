#include<iostream>
using namespace std;
int main()
{
int n,i,s=0;
cout<<"enter number";
cin>>n;
for(i=1;i<n;i++)
{
if(n%i==0)
{
s=s+i;
}
}
if(s==n)
cout<<"perfect number";
else
cout<<"Not perfect number";
}
