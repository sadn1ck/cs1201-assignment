#include <stdio.h>
#include <math.h>
void bitInvert(unsigned int a, unsigned int b, unsigned int c){
    // assuming a is in binary
    int len =floor(log10(abs(a))) + 1; //last position
    // printf("%d\n", len);
    int from = b;
    int till=b+c-1;
    char str[len];
    int s = len-1;
    for(int i=len-1;i>=0;i--){
        int d = a % 10;
        if(i>=from && i<=till){
            d = (d==1)?0:1;
        }
        str[s] = (d==1)?'1':'0';
        s--;
        a = a/10;
    }
    printf("%s", str);
}
int main(){
    int a,b,c;
    printf("Enter a number in binary: ");
    scanf("%d", &a);
    printf("Enter index where inverting starts : ");
    scanf("%d", &b);
    printf("Enter number of bits to invert: ");
    scanf("%d", &c);
    bitInvert(a, b, c);
}