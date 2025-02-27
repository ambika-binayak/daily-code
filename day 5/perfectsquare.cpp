#include<iostream>
using namespace std;
int main()
{
int n,i;
bool perfectsquare=false;
cout<<"Enter number=";
cin>>n;
for(i=1;i*i<=n;i++)
{
if(i*i==n)
{
perfectsquare=true;
break;
}
}
if(perfectsquare)
{
    cout<<"perfect square number";
}
else
cout<<"not perfect square number";

}
