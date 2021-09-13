#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;
    printf("Enter the value of a and b: ");
    scanf("%f, %f", &a, &b);
    //printf("Enter the value of a: ");
    //scanf("%f", &a);
    //printf("Enter the value of b: ");
    //scanf("%f", &b);
    printf("%f+%f=%f\n", a, b, a+b);
    printf("%f-%f=%f\n", a, b, a-b);
    printf("%f*%f=%f\n", a, b, a*b);
    printf("%f/%f=%f\n", a, b, a/b);
    printf("%f to the power of %f is %f\n", a, b, pow(a, b));
    printf("square root of %f is %f\n", a, sqrt(a));
    printf("square root of %f is %f\n", b, sqrt(b));
}
