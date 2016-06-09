#include <stdio.h>

int main()
{
   int num,sum=0,i,rev;
   scanf("%d",&num);
   while(num)
   {
       rev=num%10;
       sum=rev+sum*10;
       num=num/10;
   }
   printf("%d",sum);
    return 0;
}
