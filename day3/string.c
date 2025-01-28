#include<stdio.h>
int main()
{
char a[100];
int i,j,count=0;
puts("Enter a string");
gets(a);
for(i=0,j=strlen(a)-1;i<strlen(a)/2;i++,j--)
if(a[i]==a[j])
count++;
if(count==strlen(a)/2)
printf("\nPalindrome String");
else
printf("\nNot Palindrome String");
}
