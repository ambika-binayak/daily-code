#include<stdio.h>
int main()
{
char a[100];
int i;
printf("Enter a String");
scanf("%s",a);
for( i=strlen(a)-1;i>=0;i--)
printf("%c",a[i]);
}
