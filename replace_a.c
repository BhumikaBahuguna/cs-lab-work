15)REPLACE 'a' with $



#include <stdio.h>

int main() {
    char str[100];
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Replace 'a' with '$'
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a') {
            str[i] = '$';
        }
        // Check for newline character and replace it with null terminator
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    
    // Output the modified string
    printf("Modified string: %s\n", str);
    
    return 0;
}

