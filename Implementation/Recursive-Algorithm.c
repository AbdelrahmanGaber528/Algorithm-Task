#include <stdio.h>
#include <limits.h>

int maxProduct = INT_MIN;

void CalculateProduct(int A[], int n, int index, int count, int currentProduct) {

    if (count == 3) {
        if (currentProduct > maxProduct) {
            maxProduct = currentProduct;
        }
        return;
    }


    if (index == n) {
        return;
    }


    // Select the current number
    CalculateProduct(A, n, index + 1, count + 1, currentProduct * A[index]);

    // Skip the current number
    CalculateProduct(A, n, index + 1, count, currentProduct);
}


int MaxProductRecursive(int A[], int n) {
    maxProduct = INT_MIN;
    CalculateProduct(A, n, 0, 0, 1);
    return maxProduct;
}




int main() {
    int nums[] = { 1, 2, 3, 4 };
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = MaxProductRecursive(nums, n);
    printf("Maximum product of three numbers is: %d\n", result);

    return 0;
}
