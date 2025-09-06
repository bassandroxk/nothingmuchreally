#include <stdio.h>

int main() {
    float principal, rate, time;
    
    printf("enter principal, rate (%%), and time (years): ");
    scanf("%f %f %f", &principal, &rate, &time);
    
    float simpleInterest = (principal * rate * time) / 100;
    
    float amount = principal;
    for(int i = 0; i < (int)time; i++) {
        amount = amount + (amount * rate / 100);
    }
    float compoundInterest = amount - principal;
    
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);
    
    return 0;
}

