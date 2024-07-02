#include <stdio.h>
#include <math.h>

void sine() {
    double a;
    printf("Enter an angle:");
    scanf("%lf", &a);
    printf("Result: %lf\n", sin(a));
}

void cosine() {
    double a;
    printf("Enter an angle:");
    scanf("%lf", &a);
    printf("Result: %lf\n", cos(a));
}

void tangent() {
    double a;
   printf("Enter an angle:");
    scanf("%lf", &a);
    printf("Result: %lf\n", tan(a));
}

void squrt() {
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);
    printf("Result: %lf\n", sqrt(n));
}

void exponent() {
    double base, exp;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exp);
    printf("Result: %lf\n", pow(base, exp));
}
void ce() {
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);
    printf("Result: %lf\n", ceil(n));
}
void fl() {
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);
    printf("Result: %lf\n", floor(n));
}
void logarithm() {
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    printf("Result: %lf\n", log(number));
}


int main() {
    int choice = -1;

    printf("\nChoose an operation:\n");
    printf("1. Sine\n");
    printf("2. Cosine\n");
    printf("3. Tangent\n");
    printf("4. Square Root\n");
    printf("5. Exponentiation\n");
    printf("6. Ceil\n");
    printf("7. Floor\n");
    printf("8. Logarithm\n");
    while (choice != 0) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: sine(); break;
            case 2: cosine(); break;
            case 3: tangent(); break;
            case 4: squrt(); break;
            case 5: exponent(); break;
            case 6: ce(); break;
            case 7: fl(); break;
            case 8: logarithm(); break;
            default: printf("Invalid choice");
        }
    }

    return 0;
}
