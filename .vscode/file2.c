#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello ";
    char str2[] = "Hello";
    char str3[] = "Hi";

    // Compare str1 and str2
    printf("%d\n", strcmpZZZ(str1, str2));

    // Compare str1 and str3
    printf("%d", strcmp(str1, str3));
    return 0;
}
