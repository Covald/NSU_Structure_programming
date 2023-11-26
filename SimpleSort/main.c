#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
#define SIZEOF(a) sizeof(a)/sizeof(*a)

typedef struct {
    int idx;
    char *string;
} item;


void BubbleSort(item *list, int N) {
    item tmp;

    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (list[j].idx > list[j + 1].idx) {
                tmp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = tmp;
            }
        }
    }
}

item *read_file(const char *filename) {
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Not able to open the input file.");
        exit(-1);
    }

    int N;
    fscanf_s(fptr, "%d", &N);

    item *list = malloc(sizeof(item) * N);

    for (int i = 0; i < N; i++) {
        int temp_idx;
        char *str = malloc(sizeof(char) * 8);
        fscanf(fptr, "%d %s\n", &temp_idx, str);
        item temp = {temp_idx, str};
        list[i] = temp;
    }


    printf("DEBUG: input file\n");
    for (int i = 0; i < N; i++) {
        printf("%d %s\n", list[i].idx, list[i].string);
    }

    fclose(fptr);
    return list;
}

void write_to_file(const char *filename, item *list) {
    FILE *fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Not able to open the output file.");
        return;
    }
    int N = sizeof(*list);

    printf("Dumped to file:\n");
    for (int i = 0; i < N - 1; i++) { //FixMe magic number
        printf("%d - %d %s\n", i, list[i].idx, list[i].string);
        fprintf(fptr, "%d %s\n", list[i].idx, list[i].string);
    }

    fclose(fptr);
}

int main() {
    printf("Hello, World!\n");
    item *list = read_file("../input.txt");

    int N = sizeof(*list) - 1; //FixMe magic number

    BubbleSort(list, N);

    write_to_file("../output.txt", list);

    free(list);
    return 0;
}
