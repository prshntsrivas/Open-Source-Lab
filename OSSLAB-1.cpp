#include <stdio.h>
int main() {
        int i;
        FILE * fptr;
        char fn[50];
        char str[] = "This text is to be written in file\n";
        fptr = fopen("fputc_test.txt", "w"); // "w" defines "writing mode"
        for (i = 0; str[i] != '\n'; i++) {
            /* write to file using fputc() function */
            fputc(str[i], fptr);
        }
        fclose(fptr);
        return 0;
    }