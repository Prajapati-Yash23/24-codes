#include <stdio.h>

int main()
 {
    float gross_sales,discount, net_sales;

    printf("Enter the gross_sales: ");
    scanf("%f", &gross_sales);


    discount= 0.10 * gross_sales;
    net_sales= gross_sales - discount;

    printf(" net_sales = %.2f\n", net_sales);

}
