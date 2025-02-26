#include<iostream>
using namespace std;
int main()
{
int n,i,fact=1,r,s=0;
cout<<"Enter number=";
cin>>n;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
while(fact>0)
{
    r=fact%10;
    s=s+r;
    fact=fact/10;
}
cout<<"Sum of factorial number is:"<<s;
}
