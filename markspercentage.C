#include <stdio.h>
int main()
{
int marks1,marks2,marks3;
float percentageM1,percentageM2,percentageM3,Totalmarksinpercentage;
printf("Enter the marks of 3 subjects each:\n");
scanf("%d %d %d",&marks1,&marks2,&marks3);
Totalmarksinpercentage=(((float)marks1+marks2+marks3)/300)*100;
percentageM1=((float)marks1/100)*100;
percentageM2=((float)marks2/100)*100;
percentageM3=((float)marks3/100)*100;
if(percentageM1<33 || percentageM2<33 || percentageM3<33)
{
    printf("you are failed!!!");
}
else if (Totalmarksinpercentage<40)
{
    printf("you are failed!");
}
else{
    printf("you are passed!");
}

return 0;
}
