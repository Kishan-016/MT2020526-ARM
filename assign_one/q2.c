#include <stdio.h>
int main() {
    int i;
    int arr[15];
    for (i = 0; i < 15; ++i) {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // storing the largest number to arr[0]
    for (i = 1; i < 15; ++i) {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    printf("Largest element = %d", arr[0]);
    return 0;
}
