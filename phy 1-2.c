
#include <stdio.h>
#include <math.h>

int main() {
    double lambda1 = 530;
    double lambda2 = 700;
    int m1 = 3;
    int m2 = 2;
    double theta1 = 65.0;
    double theta2;         //


    double sin_theta1 = sin(theta1 * M_PI / 180.0);


    double sin_theta2 = (m2 * lambda2 * sin_theta1) / (m1 * lambda1);


    theta2 = asin(sin_theta2) * 180.0 / M_PI;


    printf("Red light (m = 2) bright spot angle: %.2f degrees\n", theta2);

    return 0;
}
