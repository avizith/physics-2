#include <stdio.h>
#include <math.h>

int main() {
    double theta = 45.0;
    double ratio;


    ratio = 1 / sin(theta * M_PI / 180.0);  // Convert degrees to radians


    printf("The ratio of slit width to wavelength (a/λ) is: %.3f\n", ratio);

    return 0;
}
