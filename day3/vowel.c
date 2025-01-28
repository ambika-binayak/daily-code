#include<stdio.h>
int main()
{
char a[100];
int i,v=0,c=0,s=0;
puts("Enter a String");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
v++;
else
c++;
if(a[i]==' ')
s++;
}
printf("Vowels=%d\n",v);
printf("Consonants=%d",c);
}
