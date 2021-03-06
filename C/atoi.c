#include <math.h>
#include <stdio.h>
#include <string.h>

int toInteger(char *str) {
    int i, numStr = 0, k = strlen(str);
    for (i = 0; i < strlen(str); i++, k--) {
        numStr += (str[i] - '0') * pow(i, k);
    }
    // numStr = (str[1] - '0') * 100 + (str[2] - '0') * 10 + (str[3] - '0');
    return numStr;
}

int main(int argc, char **argv) {
    int i, sum = 0;
    for (i = 1; i < argc; i++) {
        sum += toInteger(argv[i]);
    }
    printf("%d\n", sum);
}
