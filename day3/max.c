#include<stdio.h>
int main()
{
int a[]={4,7,1,8,5},i,max=0,min=a[0];
for(i=0;i<5;i++)
{
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
printf("\nLargest Element=%d",max);
printf("\nSmallest=%d",min);

}
