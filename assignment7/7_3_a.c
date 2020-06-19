#include<stdio.h>
 #include<stdbool.h>


int main() {
    int n=20;

    int arr[n];
     printf("Enter the  %d integers:\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int j=0;
    int comp=0;
    while(1)
    {
        int x;
        printf("Enter the number to be searched: ");
        scanf("%d",&x);
        bool found=false;
        for(int i=0;i<n;i++)
        {
            comp++;
            if(arr[i]==x)
            {
                found=true;
                break;
            }
        }
        if(found)
        printf("%d is present is the array\n",x);
        else
        printf("%d is not present is the array\n",x);
        j++;
        if(j==10)
        break;
    }
    float avg=(float)comp/(float)(10);
    printf("The average number of comparisons after 10 searches is %f ",avg);

    return 0;
}