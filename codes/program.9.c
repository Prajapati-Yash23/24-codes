int main() {
    float rupees, dollars;
    float rate = 88.15; 
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    rupees = dollars* rate;

    printf("Equivalent in rupees: %.2f\n", rupees);

    return 0;
}