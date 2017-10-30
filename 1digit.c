//finding the ones digit in 3 digit number
#include<stdio.h>
#include<math.h>
int main()
{
int x;
printf("enter your 3 digit number\n");
scanf("%d",&x);
x=x%10 ;
printf("your value ones digit is %d \n",x);
return 0;
}
