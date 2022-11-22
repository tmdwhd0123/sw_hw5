#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "copy.h"



int main()  {
    char* str1 = "Worldcup! Fianl 4";
    char* str2 = copy(str1);
    printf("%s\n", str2);
    free(str2);
    return 0;
}