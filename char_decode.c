#include <stdio.h>

void code();
void decode();

int main(int argc, char **argv) {
    if (argc == 2) {
        if (argv[1][0] == '0' || argv[1][0] == '1') {
            if (argv[1][0] == '1') {
                decode();
            } else {
                code();
            }
        } else {
            printf("n/a");
        }
    } else {
        printf("n/a");
    }
    return 0;
}

void code() {
    char a = 0;
    char c = ' ';
    for (int i = 0; c != '\n'; i += 2) {
        scanf("%c%c", &a, &c);
        if (c != ' ' && c != '\n') {
            printf("n/a");
            return;
        } else {
            if(c == ' ')
                printf("%X%c", a, c);
            else
                printf("%X", a);
        }
    }
}

void decode() {
    unsigned a = 1;
    char c = ' ';
    for (int i = 0; c != '\n'; i += 2) {
        scanf("%X%c", &a, &c);
        if ((int)a < 33 || (int)a > 127) {
            printf("n/a");
            return;
        } else {
            if(c == ' ')
                printf("%c%c", a, c);
            else
                printf("%c", a);
        }
    }
}