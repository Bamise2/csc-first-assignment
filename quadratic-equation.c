#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c,d, root1, root2;


    printf("Enter the coefficient of x^2: ");
    scanf("%lf", &a);
    printf("Enter the coefficient of x: ");
    scanf("%lf", &b);
    printf("Enter the constant ");
    scanf("%lf", &c);

    d = pow(b,2) - (4*a*c);

    root1 = (-b + sqrt(d)) / (2*a);
    root2 = (-b-sqrt(d))  /(2*a);

    printf("First root = %.2lf\n", root1);
    printf("Second root = %.2lf\n", root2);
}
