#include<stdio.h>
int main()
{
    int H,L,A;

    printf("Enter a value of lenght:");
    scanf("%d",&L);
    printf("Enter a value of hight:");
    scanf("%d",&H);

    A=L*H*1/2;

    printf("area : %d\n",A);

}