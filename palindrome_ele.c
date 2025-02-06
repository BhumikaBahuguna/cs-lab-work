
INPUT N ELEMENTS AND PRINT PALINDROME ELEMENTS......


#include <stdio.h>
int isPalindrome(int ) ;
int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Palindrome elements in the array are:\n");
    for(i = 0; i < n; i++) {
        if(isPalindrome(arr[i])) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
int isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}
