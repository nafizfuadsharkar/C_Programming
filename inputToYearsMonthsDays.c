#include<stdio.h>
#include<math.h>

int main(){
    int x;
    scanf("%d",&x);
    int years = x/365;
    x = x%365;
    int months = x/30;
    int days = x%30;
    printf("Years: %d\nMonths: %d\nDays: %d\n", years, months, days);
    return 0;
}
