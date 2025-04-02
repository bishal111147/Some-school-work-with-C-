#include <stdio.h>
int main()
{
int income;
float tax=0;
printf("Enter Your Income:\n");
scanf("%d",&income);
if(income>250000 && income<=500000)
{
    tax= 0.05*(income-250000);
    printf("The income tax to be paid is %.2f\n",tax);
}
else if(income>500000 && income<=1000000){
    tax = 0.05*(500000-250000)+0.2*(income-500000);
    printf("The income tax to be paid is %.2f\n",tax);

}
 else if (income>1000000)
{
    tax=0.05*(500000-250000)+0.2*(1000000-500000)+0.3*(income-1000000);
    printf("The income tax to be paid is %.2f\n",tax);

}
else if (income<=250000)
{
    printf("you don't have to pay any tax");

}
return 0;
}
