#include <stdio.h>
#include <string.h>

#include "../src/calculator.h"
#include "../src/string_utils.h"

static int passed = 0;
static int failed = 0;

#define CHECK(cond, name)                                          \
    do {                                                           \
        if (cond) {                                                \
            printf("[PASS] %s\n", name);                           \
            passed++;                                              \
        } else {                                                   \
            printf("[FAIL] %s\n", name);                           \
            failed++;                                              \
        }                                                          \
    } while (0)

int main(void) {
    /* 计算器 */
    CHECK(add(2, 3) == 5, "add(2, 3) == 5");
    CHECK(average(3, 4) == 3.5, "average(3, 4) == 3.5");
    CHECK(max_of_three(1, 2, 3) == 3, "max_of_three(1, 2, 3) == 3");
    CHECK(max_of_three(3, 3, 1) == 3, "max_of_three(3, 3, 1) == 3");

    /* 字符串 */
    char s[] = "hello";
    reverse_string(s);
    CHECK(strcmp(s, "olleh") == 0, "reverse_string(\"hello\") == \"olleh\"");

    printf("\n%d passed, %d failed\n", passed, failed);
    return failed > 0 ? 1 : 0;
}