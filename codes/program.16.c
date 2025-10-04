#include<stdio.h>
int main()
{
    float P,R,N,I;
    printf("enter a value of Principal amount.\n");
    printf("enter a value of Time period.\n");
    printf("enter a value of Rate of interest .\n");

    scanf("%f",&P);
    scanf("%f",&N);
    scanf("%f",&R);

    I=(P*R*N)/100;

    printf("Interest earned : %.2f\n",I);

}