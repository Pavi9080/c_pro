#include <stdio.h>

int main() {
    
    int arr[] = {1,2,3,4,5,6,7,8,9,11,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int totalSum = 0;
    int arraySum = 0;

    
    totalSum = (size + 1) * (size + 2) / 2;

    
    while (i < size) {
        arraySum += arr[i];
        i++;
    }

    
    int missingNumber = totalSum - arraySum;

    
    printf("The missing number is %d\n", missingNumber);

    return 0;
}
