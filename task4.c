#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void rle_compress(const char *in_file, const char *out_file) {
    FILE *in = fopen(in_file, "r");
    FILE *out = fopen(out_file, "w");
    if (!in || !out) return;

    printf("Compressing...\nOriginal text: ");
    
    char prev = fgetc(in);
    putchar(prev); // Show first character
    if (prev == EOF) {
        fclose(in);
        fclose(out);
        return;
    }

    int count = 1;
    char curr;
    while ((curr = fgetc(in)) != EOF) {
        putchar(curr); // Show each character
        if (curr == prev) count++;
        else {
            fprintf(out, "%c%d", prev, count);
            prev = curr;
            count = 1;
        }
    }
    fprintf(out, "%c%d", prev, count);
    fclose(in);
    fclose(out);

    printf("\nCompressed: ");
    in = fopen(out_file, "r");
    while ((curr = fgetc(in)) != EOF) putchar(curr);
    fclose(in);
    printf("\nSaved to: %s\n", out_file);
}

void rle_decompress(const char *in_file, const char *out_file) {
    FILE *in = fopen(in_file, "r");
    FILE *out = fopen(out_file, "w");
    if (!in || !out) return;

    printf("Decompressing...\nCompressed text: ");
    char ch;
    while ((ch = fgetc(in)) != EOF) {
        putchar(ch); // Show compressed text
        if (isalpha(ch) || ispunct(ch) || ch == ' ') {
            char count_str[20];
            int i = 0;
            char c;
            while ((c = fgetc(in)) != EOF && isdigit(c)) {
                count_str[i++] = c;
                putchar(c); // Show count digits
            }
            count_str[i] = '\0';
            int count = atoi(count_str);
            for (int j = 0; j < count; j++) {
                fputc(ch, out);
            }
            if (c != EOF) ungetc(c, in);
        }
    }
    fclose(in);
    fclose(out);

    printf("\nDecompressed: ");
    in = fopen(out_file, "r");
    while ((ch = fgetc(in)) != EOF) putchar(ch);
    fclose(in);
    printf("\nSaved to: %s\n", out_file);
}

int main() {
    int choice;
    char input[100], output[100];
    printf("1. Compress\n2. Decompress\nChoice: ");
    scanf("%d", &choice);
    printf("Input file: ");
    scanf("%99s", input);
    printf("Output file: ");
    scanf("%99s", output);

    if (choice == 1) rle_compress(input, output);
    else if (choice == 2) rle_decompress(input, output);
    return 0;
}