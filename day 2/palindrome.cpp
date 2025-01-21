#include<iostream>
using namespace std;
main()
{
int n,rev=0,rem,t;
cout<<"Enter number";
cin>>n;
t=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(rev==t)
cout<<"Palindrome";
else
cout<<"Not Palindrome";
}
