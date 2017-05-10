#include<stdio.h>
#include<stdlib.h>
/*
   *Addison Chen
   *ICSI 333
   *Lab 2
*/
int main(void)
{

int x, y, quarters, dimes, nickels, pennies;
printf("Enter an integer from 0 to 99");
scanf("%d",&x);

if(x>=0&&x<=99)

{
quarters = x/25;
y = x - quarters*25;

dimes = y/10;
y = y - dimes*10;

nickels = y/5;
y = y - nickels*5;

pennies = y/1;

printf("Quarters: %d\n", quarters);
printf("Dimes: %d\n", dimes);
printf("Nickels: %d\n", nickels);
printf("Pennies: %d\n", pennies);
}
else
exit(0);
return 0;

}


