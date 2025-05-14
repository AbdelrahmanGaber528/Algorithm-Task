#include <stdio.h>
#include <stdlib.h>


int compare(const void* a, const void* b) {
    int int_a = ((int)a);
    int int_b = ((int)b);
    return (int_a > int_b) - (int_a < int_b);
}

int MaxProductOfThree(int arr[], int length) {
    if (length < 3) {
        printf("Not enough numbers to form a product\n");
        return -1;
    }


    qsort(arr, length, sizeof(int), compare);


    int max_product1 = arr[length-1] * arr[length-2] * arr[length-3];


    int max_product2 = arr[0] * arr[1] * arr[length-1];


    return (max_product1 > max_product2) ? max_product1 : max_product2;
}

int main() {

    int arr[] = {1, 2, 3, 4};
    int length = sizeof(arr) / sizeof(arr[0]);

    int result = MaxProductOfThree(arr, length);
    if (result != -1) {
        printf("Maximum product is %d\n", result);
    }

    return 0;
}
