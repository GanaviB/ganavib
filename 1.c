#include<stdio.h>
int main() {
    int arr[100]; // Assuming a maximum array size of 100 (you can adjust this as needed)
    int n; // Size of the array
    int i; // Loop variable

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size. Please enter a positive integer less than or equal to 100.\n");
        return 1; // Exit with an error code
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array contents:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0; // Exit successfully
}
