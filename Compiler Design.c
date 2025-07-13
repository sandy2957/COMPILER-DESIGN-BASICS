#include <stdio.h>
#include <string.h>
#include <ctype.h>

// List of C keywords
const char* keywords[] = {
    "int", "float", "if", "else", "while", "return", "for", "char", "double", "void"
};

int isKeyword(char *word) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int main() {
    char filename[] = "sample.c";
    FILE *file = fopen(filename, "r");
    char ch, buffer[50];
    int index = 0;

    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("Lexical Analysis Output:\n");

    while ((ch = fgetc(file)) != EOF) {
        if (isalnum(ch)) {
            buffer[index++] = ch;
        } else if (ch == ' ' || ch == '\n' || ch == '\t') {
            if (index > 0) {
                buffer[index] = '\0';
                if (isKeyword(buffer))
                    printf("%s: Keyword\n", buffer);
                else
                    printf("%s: Identifier\n", buffer);
                index = 0;
            }
        } else {
            printf("%c: Operator or Symbol\n", ch);
        }
    }

    fclose(file);
    return 0;
}
