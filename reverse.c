#include<stdio.h>
int main()
{
int n, rem;
 printf("Enter the number:");
 scanf("%d",&n);
 while (n>0)
 {
   rem=n%10;
   printf("%d", rem);
   n=n/10;
 }
 
return 0;
}
