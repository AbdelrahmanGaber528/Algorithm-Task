#include <stdio.h>
#include <limits.h>  

int maximumProduct(int nums[], int n) {
    int max_product = INT_MIN;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int current_product = nums[i] * nums[j] * nums[k];
                if (current_product > max_product) {
                    max_product = current_product;
                }
            }
        }
    }

    return max_product;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = maximumProduct(nums, n);
    printf("Maximum product of three numbers is: %d\n", result);

    return 0;
}
