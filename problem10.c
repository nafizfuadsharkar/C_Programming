#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d",&a,&b);
    int d = a/b;
    int r = a%b;
    double f = a/(b*1.0);
    printf("%d %d %lf",d,r,f);
    return 0;
}
