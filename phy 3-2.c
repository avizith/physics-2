
#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

int main() {
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
