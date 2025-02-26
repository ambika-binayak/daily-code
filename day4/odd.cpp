#include<iostream>
using namespace std;
int main()
{
int a,b,i,s=0;
cout<<"enter range";
cin>>a>>b;
for(i=a;i<=b;i++)
{
if(i%2!=0)
{
s=s+i;
}
}
cout<<"Sum of odd number="<<s;
}
