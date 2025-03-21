#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

double calculateTheta(double m, double lambda, double a) {
    double theta = asin((m * lambda) / a);
    return theta * (180.0 / PI);
}

int main() {
    double lambda, m, a[3], theta[3];
    int i, maxIndex;

    printf("Enter wavelength (nm): ");
    scanf("%lf", &lambda);

    if (lambda < 380 || lambda > 750) {
        printf("Out of range. Please enter a valid number.\n");
        return 1;
    }

    lambda *= 1e-9;

    printf("Enter diffraction order (m): ");
    scanf("%lf", &m);

    for (i = 0; i < 3; i++) {
        printf("Enter slit width a%d (µm): ", i + 1);
        scanf("%lf", &a[i]);
        a[i] *= 1e-6;
        theta[i] = calculateTheta(m, lambda, a[i]);
        printf("Theta for a%d: %.4f degrees\n", i + 1, theta[i]);
    }

    maxIndex = 0;
    for (i = 1; i < 3; i++) {
        if (theta[i] > theta[maxIndex]) {
            maxIndex = i;
        }
    }
    printf("Slit a%d bent the light most with theta = %.4f degrees\n", maxIndex + 1, theta[maxIndex]);

    double lambda1 = 530e-9;
    double lambda2 = 700e-9;
    int m1 = 3;
    int m2 = 2;
    double theta1 = 65.0 * (PI / 180.0);
    double d = (m1 * lambda1) / sin(theta1);
    double theta2 = asin((m2 * lambda2) / d);
    theta2 *= (180.0 / PI);
    printf("The angle for the second-order bright spot of red light: %.4f degrees\n", theta2);

    return 0;
}
