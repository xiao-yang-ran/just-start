#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    
    return 0;
}

double funcos( double e, double x ){
    double a = 1,sum =1;
    int i = 1,flag = -1;
    do{
        a = a * x * x / i / (i + 1);
        i += 2;
        sum += a * flag;
        flag = -flag;
    }while(a > e)
        return sum;
}
