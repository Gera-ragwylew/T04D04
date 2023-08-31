#include <stdio.h>

int findmaxcompare(int a); // основная функция программы
int iscompare(int z); // функция проверки простоты числа
int div(int dividend, int divisor); // функция деления
int reminder(int dividend, int divisor); // функция взяитя остатка от деления

int main() {
    int a = 0;
    char c = 0;
    if(scanf("%d%c", &a, &c) != 2 || c != '\n') { // стандартная проверка на ввод целых чисел
        printf("n/a");
    } else {
        if (a < 0) { // если число отрицательное
            a = - a; // меняем на положительное
        }
        printf("%d", findmaxcompare(a)); // запуск основной функции
    }
    return 0;
}

int findmaxcompare(int a) {
    int z = a;
    for(int i = 2; i < a; i++) { // проверяем все числа от 2 до а
        if (!(reminder(a, i))) { // проверяем делится ли нацело
            z = div(a, i); // делим, записываем в доп переменную z
            if(iscompare(z)) { // проверяем, простое ли число
                break; // останавливаем, если да
            }
        }
    }
    return z;
}

int iscompare(int z) {
    int i = 2;
    int flag = 1;
    while (i < z) {
        if (!(reminder(z, i))) {
            flag = 0; // меняем флаг если число составное
            break; // сразу выходим из цикла
        }
        i++;
    }
    return flag; // 0 - составное, 1 - простое
}

int div(int dividend, int divisor) {
    int i = 0;
    while (dividend > 0) {
        dividend -= divisor;
        i++; 
    }
    return i; // возвращаем частное
}

int reminder(int dividend, int divisor) {
    int i = 0;
    while (dividend > 0) {
        dividend -= divisor;
        i++; 
    }
    return -dividend; // возвращаем положительный остаток, либо 0
}