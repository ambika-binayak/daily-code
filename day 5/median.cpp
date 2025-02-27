#include<iostream>
using namespace std;
int main()
{
int a[]={3,1,2,4,5,6};
int i,j,t,median;
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
if(5%2!=0)
{
    median=a[5/2];
}
else
{
    median=(a[5/2]+(a[5/2]+1))/2;
}
cout<<median;
}
