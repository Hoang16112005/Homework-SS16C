#include <stdio.h>
#include <string.h>
void reverseString1(char *inputString, char *reverseString) {
    int length = strlen(inputString);
    for (int i = 0; i < length; i++) {
        reverseString[i] = inputString[length - 1 - i];
        }
    }
int main() {
    char inputString[100], reverseString[100];
    printf("Enter string: ");
    fgets(inputString, sizeof(inputString), stdin);
    fflush(stdin);
    reverseString1(inputString, reverseString);
    printf("%s", reverseString);
}
