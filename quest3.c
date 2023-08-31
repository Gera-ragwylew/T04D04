#include <stdio.h>

int fib(int n);

int main() {
    int n = 0;
    char c = 0;
    if(scanf("%d%c", &n, &c) != 2 || c != '\n') { // стандартная проверка на ввод целых чисел
        printf("n/a");
    } else {
        printf("%d", fib(n));
    }
    return 0;
}

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}