
include <stdio.h>
#include <math.h>  // sin()


const char* getColor(double wavelength) {
    if (wavelength >= 380 && wavelength < 450) return "Violet";
    if (wavelength >= 450 && wavelength < 485) return "Blue";
    if (wavelength >= 485 && wavelength < 500) return "Cyan";
    if (wavelength >= 500 && wavelength < 565) return "Green";
    if (wavelength >= 565 && wavelength < 590) return "Yellow";
    if (wavelength >= 590 && wavelength < 625) return "Orange";
    if (wavelength >= 625 && wavelength <= 750) return "Red";
    return "Unknown";
}

int main() {
    int m;
    double theta, d;
    double wavelength;


    printf("Enter the order (m): ");
    scanf("%d", &m);
    printf("Enter the angle (theta) in degrees: ");
    scanf("%lf", &theta);
    printf("Enter the slit separation (d) in micrometers: ");
    scanf("%lf", &d);


    theta = theta * M_PI / 180.0;
    d = d * 1e-6;
    wavelength = (d * sin(theta)) / m;
    wavelength = wavelength * 1e9;


    printf("Wavelength: %.2f nm\n", wavelength);
    printf("Color: %s\n", getColor(wavelength));

    return 0;
}
