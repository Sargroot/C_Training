#include <stdio.h>

void sort(int arr[], int n) {
    int temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, i, target;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    int greater[n], count = 0, sum = 0;
    
    for(i = 0; i < n; i++) {
        if(arr[i] > target) {
            greater[count++] = arr[i];
            sum += arr[i];
        }
    }

    sort(greater, count);

    printf("The Target values are");
    for(i = 0; i < count; i++) {
        printf(" %d", greater[i]);
    }
    
    float avg = (count == 0) ? 0 : (float)sum / count;

    printf("\nsum of value is %d\n", sum);
    printf("Average of the value is %.1f\n", avg);

    return 0;
}