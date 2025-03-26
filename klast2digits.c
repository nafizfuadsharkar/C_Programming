#include <stdio.h>`

//print k25(k+last 2 digit of year)
int main(){
    int year;
    scanf("%d",&year);
    int newY = year/10;  // newY = 202
    int newY2 = newY*10; // 2 = 2020
    int lastDig = year - newY2; // 2025-2020
    int newY3 = newY/10; //20
    int newY4 = newY3*10; //200
    int secondLastd = newY - newY4; //202-200
    printf("K%d%d\n",secondLastd, lastDig);
    return 0;
}
