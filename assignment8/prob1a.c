#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    int arr1[15];
    char arr2[15];

    //checking the address
    printf("Data       Memory occupied in byte\n");
    printf("int a:                %d\n", sizeof(a));
    printf("float b:              %d\n", sizeof(b));
    printf("char c:               %d\n", sizeof(c));
    printf("int arr[10]:          %d\n", sizeof(arr1));
    printf("char ch[10]:          %d\n", sizeof(arr2));
    printf("Data         hex\t dec\n");
    printf("int a      :%x\t%d\n", &a, &a);
    printf("float b    :%x\t%d\n", &b, &b);
    printf("char c     :%x\t%d\n", &c, &c);
    printf("int arr1[] :%x\t%d\n", &arr1, &arr1);
    printf("char arr2[]:%x\t%d\n", &arr2, &arr2);
}