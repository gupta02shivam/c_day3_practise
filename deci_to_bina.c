#include<stdio.h>
int main(){
 int num, rem=0, bin=0, place=1;

printf("Enter a decimal number:\n");
scanf("%d", &num);

printf("binary equivalent of %d is \n", num);
while (num!=0)
{
    rem= num%2;
    num= num/2;
    bin=bin + (rem* place);
    place=place*10;
    
}

printf("%d", bin);

return 0;
}