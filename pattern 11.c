
#include<stdio.h>
int main()
{
  int i,j,a;
  
  for(i=1;i<=5;i++)
  {
   printf("\n");
   for(a=4;a>=i;a--)
   {
     printf(" ");
   }
   for(j=1;j<=i;j++)
   {
    printf("%d",j);
   }
  }
  return 0;
}