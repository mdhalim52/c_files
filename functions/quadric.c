#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, D, real, img;

    printf("Enter the value of a, b , c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = (b*b) - 4*a*c;

    real = -b/(2*a);
    img = sqrt(D)/(2*a);

    if (a == 0)
    {
        printf("No roots are available\n");
    }
    else if (D == 0)
    {
        printf("Root1 = Root2 = %.2lf\n", real);
    }
    else if (D > 0)
    {
        printf("Root1 = %.2lf\n", real + img);
        printf("Root1 = %.2lf\n", real - img);
    }
    else if (D < 0)
    {
        printf("Root1 = %.2lf + i%.2lf\n", real, (sqrt(-D) / (2*a)));
        printf("Root1 = %.2lf - i%.2lf\n", real, (sqrt(-D) / (2*a)));
    }
    return 0;
}