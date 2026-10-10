#include <stdio.h>
#include <math.h> // sqrt() ke liye

int main()
{
    int a, b, c;
    float x;
    
    printf("Enter coefficient of x^2 'a': ");
    scanf("%d", &a);
    
    printf("Enter coefficient of x 'b': ");
    scanf("%d", &b); // Yahan :d ki jagah %d kiya gaya hai
    
    printf("Enter constant term 'c': ");
    scanf("%d", &c);
    
    // Formula ko sahi tarike se likha gaya hai with brackets and sqrt()
    x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    
    if ((b * b - 4 * a * c) >= 0)
    {
        printf("%f", x); // float ke liye %f use kiya hai
    }
    else
    {
        printf("Imaginary root");
    }
    
    return 0;
}
