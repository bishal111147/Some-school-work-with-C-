#include <stdio.h>
int main()
{
    int si,p,t,r,A;
    printf("emter principal: ");
    scanf("%d",&p);
    printf("enter time: ");
    scanf("%d",&t);
    printf("enter rate: ");
    scanf("%d",&r);
    si=(p*t*r)/100;
    A=p+si;
    printf("the simple interest is: %d\n",si);
    printf("the amount is: %d",A);
    return 0;
}