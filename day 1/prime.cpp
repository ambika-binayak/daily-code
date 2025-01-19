#include<iostream>
using namespace std;
int main()
{
int n,i,f=0;
cout<<"Enter number:";
cin>>n;
for(i=1;i<=n;i++)
if(n%i==0)
{
f++;
}
if(f==2)
{
cout<<"prime";
}
else
cout<<"no prime";

}
