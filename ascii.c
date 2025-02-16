#include <stdio.h>

int main() {
    char ch;

    // Taking input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Displaying ASCII value
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
