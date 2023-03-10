#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    length = strlen(str);

    printf("The individual characters of the string are:\n");

    for (i = 0; i < length; i++) {
        printf("%c ", str[i]);
    }

    return 0;
}
