#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    int carry=0;
    int sum=0;
    int p=1;
    while(a!=0 || b!=0)
    {
        int r1=a%2;
        int r2=b%2;
        a=a/2;
        b=b/2;
        sum=sum+(r1^r2^carry)*p;
        carry=((r1^r2)&(carry))|(r1&r2);
        p=p*2;
    }
    sum=sum+carry*p;
    a=sum;
    printf(" sum is: %d",a);
    return 0;
}
