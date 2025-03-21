#include <stdio.h>

void findOrder(double lambda, double d) {

    if (lambda < 380 || lambda > 750) {
        printf("Out of the range. Please enter a valid number.\n");
        return;
    }


    int m = (int)(d / lambda);


    if (m > 0) {
        printf("%d-th order maxima\n", m);
    } else {
        printf("No maxima found.\n");
    }
}

int main() {
    double lambda, d;


    printf("Enter wavelength (in nm): ");
    scanf("%lf", &lambda);
    printf("Enter slit separation (in micrometers): ");
    scanf("%lf", &d);

    findOrder(lambda, d);
    return 0;
}
