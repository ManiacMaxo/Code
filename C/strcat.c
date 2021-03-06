// ------------------------------------------------------------------------
// NAME: Victor Gorchilov
// CLASS: 11a
// NUMBER: 8
// PROBLEM: #2
// FILE NAME: strcat.c (unix file name)
// FILE PURPOSE: creating strcat without use of library
// ------------------------------------------------------------------------

#include <stdio.h>

char* strcat(char* destination, const char* source) {
    //------------------------------------------------------------------------
    // FUNCTION: strlen
    // finding length of a string
    // PARAMETERS:
    // two strings -> one to append to and one to append
    //------------------------------------------------------------------------

    int i;
    int j;
    for (i = 0; destination[i] != '\0'; i++) {
    }
    for (j = 0; source[j] != '\0'; j++) {
        destination[i + j] = source[j];
    }
    destination[i + j] = '\0';
    return destination;
}

int main() {
    char string[100] = "This is a";
    char string2[15] = " string";
    strcat(string, string2);
    printf("%s\n", string);
    return 0;
}
