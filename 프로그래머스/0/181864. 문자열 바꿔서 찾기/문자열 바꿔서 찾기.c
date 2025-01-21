#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* myString, const char* pat) {
    int len = strlen(myString);
    char *a = (char*)malloc(sizeof(char) * strlen(myString));

    for (int i = 0; i < len; i++) {
        if (myString[i] == 'A')
            a[i] = 'B';
        else if (myString[i] == 'B')
            a[i] = 'A';
        else
            a[i] = myString[i];
    }

    if (strstr(a, pat) != NULL)
        return 1;
    else
        return 0;
}