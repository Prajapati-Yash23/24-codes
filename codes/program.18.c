#include<stdio.h>
int main()
{
    int L,B,A,P;

    printf("Enter a value of lenght:");
    scanf("%d",&L);
    printf("Enter a value of widht:");
    scanf("%d",&B);

    A=L*B;
    P=2*(L+B);

    printf("area : %d\n",A);
    printf("perimeter : %d\n",P);

}