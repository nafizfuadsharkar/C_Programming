#include<stdio.h>
int main(){
    long long a,b;
    scanf("%lld%lld", &a,&b);
    long long c;
    c = (a+b-1)/b;
    printf("%lld",c);
    return 0;
}
