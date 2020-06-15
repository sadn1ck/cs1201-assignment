#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    int arr1[15];
    char arr2[15];

    //checking the address
    printf("Data         hex\t dec\n");
    printf("int a      :%x\t%d\n", &a, &a);
    printf("float b    :%x\t%d\n", &b, &b);
    printf("char c     :%x\t%d\n", &c, &c);
    printf("int arr1[] :%x\t%d\n", &arr1, &arr1);
    printf("char arr2[]:%x\t%d\n", &arr2, &arr2);
}