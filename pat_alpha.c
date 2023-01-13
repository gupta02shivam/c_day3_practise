#include<stdio.h>
int main(){

int r,c,sp;
r=1;
while (r<=4)
{

  sp=3;
  while (sp>=r)
  {
    printf(" ");
    sp--;
  }
   c=1;
   while (c<=r)
   {
    printf("%c", c+64);
    c++;
   }
   c=c-2;
   while (c>=1)
   {
    printf("%c", c+64);
    c--;
   }
   
    printf("\n");
    r++;
}

return 0;
}
