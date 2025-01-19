#include<iostream>
using namespace std;
int main()
{
int a=0,b=1,c,i,n;
cout<<"Enter number";
cin>>n;
cout<<a<<"\t"<<b<<"\t";
for(i=1;i<=n-2;i++)
c=a+b;
while(c<=n)
{
cout<<c<<"\t";
a=b;
b=c;
c=a+b;
}

}
