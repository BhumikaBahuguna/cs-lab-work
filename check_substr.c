

8) TO INPUT A STRING 'A' AND A STRING 'B' WHERE LENGTH OF STRING 'B' IS LESS THAN LENGTH OF STRING 'A' , CHECK WETHER 'B' IS SUB STRING OF 'A'.



#include <stdio.h>
#include <string.h>
int isSubstring(char a[], char b[]) {
    int len_a = strlen(a);
    int len_b = strlen(b);
   for (int i = 0; i <= len_a - len_b; i++) {
        int j;
        for (j = 0; j < len_b; j++) {
            if (a[i + j] != b[j])
                break;
        }
        if (j == len_b)
            return 1; // substring found
    }
}
int main() {
    char a[100], b[100];
    printf("Enter string a: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter string b: ");
    fgets(b, sizeof(b), stdin);
    if (a[strlen(a) - 1] == '\n')
        a[strlen(a) - 1] = '\0';
    if (b[strlen(b) - 1] == '\n')
        b[strlen(b) - 1] = '\0';
    if (isSubstring(a, b))
        printf("'%s' is a substring of '%s'\n", b, a);
    else
        printf("'%s' is not a substring of '%s'\n", b, a);
    return 0;
}
