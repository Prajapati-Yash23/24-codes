#include<stdio.h>
 
int main() 
{
    int hours,minutes;

    printf("Enter the hours:");
    scanf("%d",&hours);
    minutes = hours*60;
    printf("%dhours = minutes %d",hours,minutes);
    return 0;

}