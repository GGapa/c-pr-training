#include <string.h>

#include "string_utils.h"

void reverse_string(char *str) {
    if (str == NULL) {
        return;
    }

    int len = (int)strlen(str);
    for (int i = 0; i < len/2.0; i++) {
        char tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
    }
}