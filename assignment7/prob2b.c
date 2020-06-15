#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter all %d integers:\n", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (a[j + 1] < a[j]){
                int t = a[j + 1];
                a[j + 1] = a[j];
                a[j] = t;
            }
        }
    }
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}