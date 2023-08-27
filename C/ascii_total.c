/*
You'll be given a string, and have to return the sum of all characters as an int. The function should be able to handle all printable ASCII characters.

Examples:

uniTotal("a") == 97
uniTotal("aaa") == 291
*/

#include <string.h>
#include <stdio.h>

int uni_total(const char *s);

int main(void)
{
    int result = uni_total("aaa");

    printf("%d", result);

    return 0;
}

int uni_total(const char *s)
{
    int result = 0;

    for (int i = 0; i < (int)strlen(s); i++) {
        result += (int)s[i];
    }

    return result;
}
