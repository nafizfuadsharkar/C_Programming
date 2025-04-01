#include<stdio.h>
#include<math.h>
int main(){
    double pi = acos(-1);
    double r;
    scanf("%lf",&r);
    double area, circumference;
    area = pi*r*r;
    circumference = 2*pi*r;
    printf("%lf %lf",area, circumference);
    return 0;
}
