#include <stdio.h>
#include <math.h> 
int main()
{
    int a, b, c;
    float x;
    printf("Enter coefficient of x^2 'a': ");
    scanf("%d", &a);
    printf("Enter coefficient of x 'b': ");
    scanf("%d", &b); 
    printf("Enter constant term 'c': ");
    scanf("%d", &c);
    x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    if ((b * b - 4 * a * c) >= 0)
    {
        printf("%f", x);
    }
    else
    {
        printf("Imaginary root");
    }
    return 0;
}
