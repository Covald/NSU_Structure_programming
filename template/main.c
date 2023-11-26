#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define INPUTFILE "../input.txt"
#define OUTPUTFILE "../output.txt"
char *read_file(int size, const char *filename) {
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Not able to open the input file.");
        return "";
    }
    char *myString = malloc(sizeof(char) * size);
    fgets(myString, 100, fptr);
    fclose(fptr);
    return myString;
}

void write_to_file(int size, const char *filename, char *string) {
    FILE *fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Not able to open the output file.");
        return;
    }
    fwprintf(fptr, string);
    fclose(fptr);
}

int main() {
    printf("Hello, World!\n");
    char* string = read_file(1,"../input.txt");
    write_to_file(1,"../output.txt",string);
    return 0;
}
