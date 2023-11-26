#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS
#define INPUTFILE "../input.txt"
#define OUTPUTFILE "../output.txt"
typedef struct {
    double x;
    unsigned long long int y;
} item;

unsigned long long int double_as_uint64(double a) {
    unsigned long long int r;
    memcpy(&r, &a, sizeof r);
    return r;
}

double uint64_to_double(unsigned long long int a) {
    double r;
    memcpy(&r, &a, sizeof(r));
    return r;
}

item *read_file(FILE *fp, int size) {
    item *list = malloc(sizeof(item) * size);

    for (int i = 0; i < size; i++) {
        int P, Q;
        unsigned long long int M;
        fscanf(fp, "%d/%d xor %llx\n", &P, &Q, &M);
        item tmp = {(double) P / Q, M};
        list[i] = tmp;
    }

    printf("Input file:\n");
    for (int i = 0; i < size; i++) {
        printf("%f %llx\n", list[i].x, list[i].y);
    }

    fclose(fp);
    return list;
}

void write_to_file(int size, double *results) {
    FILE *fp = fopen(OUTPUTFILE, "w");
    if (fp == NULL) {
        printf("Not able to open the output file.");
        return;
    }

    for (int i = 0; i < size; i++) {
        fprintf(fp, "%0.15g\n", results[i]);
    }
    fclose(fp);
}

int main() {

    FILE *fp = fopen(INPUTFILE, "r");
    if (fp == NULL) {
        printf("Not able to open the output file.");
        exit(-1);
    }
    int size;
    fscanf(fp, "%d\n", &size);

    item *list = read_file(fp, size);

    double *results = malloc(size * sizeof(double));

    for (int i = 0; i < size; i++) {
        unsigned long long int tmp_hexed_double = double_as_uint64(list[i].x);
        double tmp = uint64_to_double(tmp_hexed_double ^ list[i].y);
        results[i] = tmp;
    }

    write_to_file(size, results);
    free(list);
    free(results);
    return 0;
}
