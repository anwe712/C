#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("You entered: %s\n", str);

    return 0;
}
