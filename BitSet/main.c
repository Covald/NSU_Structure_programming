#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

typedef unsigned short Bitword;

  
void BitsetZero(Bitword* arr, int num) {
    Bitword* tmp = calloc(num, sizeof(Bitword));
    if (num > 0) {
        memcpy(arr, tmp, num * sizeof(Bitword));
    }
};

int BitsetGet(const Bitword* arr, int index) {
    return arr[index];
};

void BitsetSet(Bitword* arr, int index, int newval) {
    arr[index] = newval;
};

int BitsetAny(const Bitword* arr, int left, int right) {
    for (int i = left; i < right; i++) {
        if (arr[i] == 1) {
            return 1;
        }
    }
    return 0;
};



int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    int n;
    scanf("%d", &n);
    Bitword* arr = calloc(n, sizeof(Bitword));
    int t = -1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        if (t == 0) {
            int num;
            scanf("%d", &num);
            arr = calloc(num, sizeof(Bitword));
        }
        else if (t == 1) {
            int idx;
            scanf("%d", &idx);
            int p = BitsetGet(arr, idx);
            printf("%d\n", p);
        }
        else if (t == 2) {
            int idx, newval;
            scanf("%d %d", &idx, &newval);
            BitsetSet(arr, idx, newval);
        }
        else if (t == 3) {
            int l, r;
            scanf("%d %d", &l, &r);
            int  o = BitsetAny(arr, l, r);
            if (o == 1) {
                printf("some\n");
            }
            else {
                printf("none\n");
            }
        }
    }
    free(arr);
}