#include <stdio.h>
#include <math.h> 
double deg_to_rad(double degrees) {
    return degrees * M_PI / 180.0;
}

int main() {
    double a=4;
    scanf("%lf", &a);
    double b=3;
    scanf("%lf", &b);
    double C_degrees;
    scanf("%lf", &C_degrees);
    double C_rad = deg_to_rad(C_degrees);
    double S = (a * b * sin(C_rad)) / 2.0;
    double c_squared = a * a + b * b - 2 * a * b * cos(C_rad);
    double c = sqrt(c_squared);
    double L = a + b + c;
    double h = b * sin(C_rad);
    printf("%.4f\n", S);
    printf("%.4f\n", L);
    printf("%.4f\n", h);

    return 0;
}

