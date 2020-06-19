#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n = 20;

    int arr[n];
    printf("Enter the  %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int k = 0;
    int comp = 0;
    printf("Sorting the array using bubble sort\n");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int t = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = t;
            }
        }
    }
    while (1)
    {
        int x;
        printf("Enter the number to be searched: ");
        scanf("%d", &x);
        bool found = false;
        int low = 0;
        int high = n - 1;
        int mid = (low + high) / 2;
        while (low <= high)
        {
            comp++;
            if (arr[mid] == x)
            {
                found = true;
                break;
            }
            else if (arr[mid] > x)
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
            mid = (high + low) / 2;
        }
        if (found)
            printf("%d is present is the array\n", x);
        else
            printf("%d is not present is the array\n", x);
        k++;
        if (k == 10)
            break;
    }
    float avg = (float)comp / (float)(10);
    printf("The average number of comparisons after 10 searches is %f ", avg);

    return 0;
}