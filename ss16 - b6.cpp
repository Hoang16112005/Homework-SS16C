#include <stdio.h>
void findArray(int *arr, int *value) {
    for(int i = 0; i < 5; i++) {    
    if (arr[i] == *value) {
        printf("%d", i);
        break;
        }
    }
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int value;
    printf("Enter value need to find: ");
    scanf("%d", &value);
    findArray(arr, &value);
}
