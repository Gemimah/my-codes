#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[6] = "Hello";
    char str2[6] = "yello";

    int result = strcmp(str2, str1);

    if (result < 0) {
        printf("\"%s\" is less than \"%s\"\n", str2, str1);
    } else if (result > 0) {
        printf("\"%s\" is greater than \"%s\"\n", str2, str1);
    } else {
        printf("\"%s\" is equal to \"%s\"\n", str2, str1);
    }

    return 0;
}

