#include <stdio.h>

#include "calculator.h"
#include "string_utils.h"

int main(void) {
    printf("add(2, 3) = %d (期望 5)\n", add(2, 3));
    printf("average(3, 4) = %.1f (期望 3.5)\n", average(3, 4));

    char s[] = "hello";
    reverse_string(s);
    printf("reverse_string(\"hello\") = \"%s\" (期望 \"olleh\")\n", s);

    printf("max_of_three(3, 3, 1) = %d (期望 3)\n", max_of_three(3, 3, 1));
    return 0;
}