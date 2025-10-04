#include <stdio.h>

int main() {
    float rupees, dollars;
    float rate = 88.15; 
    printf("Enter amount in Rupees: ");
    scanf("%f", &rupees);

    dollars = rupees / rate;

    printf("Equivalent in Dollars: %.2f\n", dollars);

    return 0;
}