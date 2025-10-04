#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter a value of celcius.");
    scanf("%f",&c);

    f=(9.0/5.0*c)+32;

    printf("fahrenheit : %.2f\n",f);
    return 0;
}