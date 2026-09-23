#include "calculator.h"

int add(int a, int b) {
    return a + b;
}

double average(int a, int b) {
    return (a + b) / 2;
}

int max_of_three(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    if (b > a && b > c) {
        return b;
    }
    return c;
}