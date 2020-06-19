#include <stdio.h>
int main()
{
    int *a;
    float *b;
    char *c;
    int *arr[10];
    char *ch[10];
    printf("Data       Memory occupied in byte\n");
    printf("int a:                %d\n", sizeof(a));
    printf("float b:              %d\n", sizeof(b));
    printf("char c:               %d\n", sizeof(c));
    printf("int arr[10]:          %d\n", sizeof(arr));
    printf("char ch[10]:          %d\n", sizeof(ch));
    printf("Data           hex\t  dec\n");
    printf("int a:       %p\t%d\n", &a, &a);
    printf("float b:     %p\t%d\n", &b, &b);
    printf("char c:      %p\t%d\n", &a, &a);
    printf("int arr[10]: %p\t%d\n", &arr, &arr);
    printf("char ch[10]: %p\t%d\n", &ch, &ch);
    return 0;
}