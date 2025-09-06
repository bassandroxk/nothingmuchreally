#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    
    printf("enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    float d = b*b - 4*a*c;
    
    if(d > 0) {
        float r1 = (-b + sqrt(d)) / (2*a);
        float r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different: %.0f, %.0f\n", r1, r2);
    } else if(d == 0) {
        float r = -b / (2*a);
        printf("Roots are real and same: %.0f\n", r);
    } else {
        printf("Roots are complex\n");
    }
    
    return 0;
}
