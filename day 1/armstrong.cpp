#include<iostream>
using namespace std;
int main()
{
int n,arm=0,rem,t;
cout<<"Enter number:";
cin>>n;
t=n;
while(n>0)
{
rem=n%10;
arm=arm+rem*rem*rem;
n=n/10;
}
if(arm==t)
{
cout<<"armstrong number";
}
else
cout<<"not armstrong number";
}
