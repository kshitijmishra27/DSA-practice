#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *num;
    printf("enter the number of employees= ");
    scanf("%d", &n);
    num = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter the age of employee %d =", i + 1);
        scanf("%d", num + i);
    }
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *(num + i);
    }
    printf("%f", sum);
    printf("the average age= %.2f", (float)sum / n);
    return 0;
}