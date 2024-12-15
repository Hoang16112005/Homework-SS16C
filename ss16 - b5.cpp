#include <stdio.h>
void addArray(int *arr, int *value, int *position) {
        arr[*position] = *value;
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int value;
    int position;
    printf("Enter position need to change: ");
    scanf("%d",&position);
    printf("Enter new value: ");
    scanf("%d",&value);
    addArray(arr, &value, &position);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}
