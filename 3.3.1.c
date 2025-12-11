#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("character is an alphabet.");
    }

    else if (ch >= '0' && ch <= '9') {
        printf("the character is digit");
    }

    else {
        printf("character is a special character.");
    }


}
