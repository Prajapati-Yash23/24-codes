int main() {
    float pounds, dollars;
    float rate = 0.74; 
    printf("Enter amount in pounds: ");
    scanf("%f", &pounds);

    dollars = pounds/ rate;

    printf("Equivalent in Dollars: %.2f\n", dollars);

    return 0;
}