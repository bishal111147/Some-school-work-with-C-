#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int letter=4;
    printf("enter a name: ");
    scanf("%s",&name);
    if (strlen(name)>=letter)
    {
        printf("it is a valid name length to save in our system!!");
    }
    else
    {
        printf("not a valid name length to save in our system!!");
    }
    return 0;
}