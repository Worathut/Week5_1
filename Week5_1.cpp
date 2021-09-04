#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    float height;
    float sum = 0;
    float average;
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter the height for %d student : ", i);
        scanf("%f", &height);
        sum = sum + height;
    }
    average = sum / 10.0;
    printf("Average height is : %.2f\n", average);
    return 0;
}