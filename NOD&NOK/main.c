#include <stdio.h>
#include <math.h>

int NOD(int a, int b){
    while (a != b){
        if (a > b){
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int NOK(int a, int b){
    return abs(a * b)/NOD(a, b);
}

int main(){
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("NOK = %d\nNOD = %d", NOK(a, b), NOD(a, b));
    return 0;
}