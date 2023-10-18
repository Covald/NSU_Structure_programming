#include <stdio.h>
#include <stdlib.h>

unsigned int *fib(unsigned int num) {
    unsigned int *numbers = malloc(sizeof(unsigned int) * num);
    if (num == 1) {
        numbers[0] = 1;
    } else if (num == 2) {
        numbers[0] = 1;
        numbers[1] = 1;
    } else {
        unsigned int a1,a2,b;
        a1 = 1;
        a2 = 1;
        numbers[0] = 1;
        numbers[1] = 1;
        for (int i = 2; i < num; i++) {
            numbers[i]=a1+a2;
            b = a1;
            a1 = a2;
            a2 = b + a1;
        }
    }
    return numbers;
}

int main() {
    printf("Enter count of Fibonacci numbers:");
    unsigned int num;
    scanf_s("%d", &num);
    unsigned int* numbers = fib(num);
    for (int i=0;i<num;i++){
        printf("%d ",numbers[i]);
    }
    return 0;
}
