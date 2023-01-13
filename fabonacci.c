#include<stdio.h>
int main(){

int n, n1=0, n2=1, term, i;
printf("Enter the fabonacci series: \n");
scanf("%d", &n);

printf("fibonacci series:\n%d\n%d\n", n1, n2);
for ( i = 3; i <= n; i++)
{
   term=n1+n2;
   printf("%d\n", term);
   n1=n2;
   n2=term;
}

 return 0;
}