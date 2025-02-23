18) CONVERT LOWER CASE TO UPPER CASE AND VICE VERSA 






#include <stdio.h>

void convertCase(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32; // Convert lowercase to uppercase
        } else if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32; // Convert uppercase to lowercase
        }
        str++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    convertCase(str);

    printf("Converted string: %s\n", str);

    return 0;
}
