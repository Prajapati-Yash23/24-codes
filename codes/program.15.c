#include<stdio.h>
int main()
{
    float F,c;
    printf("Enter a value of fahrenheit.");
    scanf("%f",&F);

    c=5.0/9.0*(F-32);

    printf("celcius: %.2f\n",c);
    return 0;
}