#include <stdio.h>
#include <stdlib.h>
#include "math.h"

#define _CRT_SECURE_NO_WARNINGS
#define INPUTFILE "../input.txt"
#define OUTPUTFILE "../output.txt"

void write_to_file(int size, int *results) {
    FILE *fp = fopen(OUTPUTFILE, "w");
    if (fp == NULL) {
        printf("Not able to open the output file.");
        return;
    }
    for (int i = 0; i < size; i++) {
        fprintf(fp, "%d\n", results[i]);
    }
    fclose(fp);
}

int binarySearch(const int *arr, int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    FILE *fp = fopen(INPUTFILE, "r");
    if (fp == NULL) {
        printf("Not able to open the output file.");
        exit(-1);
    }

    int N, Q;

    fscanf(fp, "%d\n", &N);
    int *arr = malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++) {
        fscanf(fp, "%d ", &arr[i]);
        printf("%d ", arr[i]);
    }
    printf("\n");

    fscanf(fp, "%d\n", &Q);
    int *arr2 = malloc(sizeof(int) * Q);

    for (int i = 0; i < N; i++) {
        fscanf(fp, "%d ", &arr2[i]);
        printf("%d ", arr2[i]);
    }
    printf("\n");

    int *results = malloc(sizeof(int) * Q);

    int prev_ans = 0;
    for (int i = 0; i < Q; i++) {
        int y = arr2[i] + prev_ans;
        int tmp = binarySearch(arr, 0, N - 1, y);
        results[i] = tmp;
        prev_ans = tmp;
        printf("x:%d, prev:%d, y:%d, res:%d\n", arr2[i], prev_ans, y, tmp);
    }

    write_to_file(Q, results);
    fclose(fp);
    free(arr);
    free(results);
    return 0;
}
