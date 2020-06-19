#include <stdio.h>
#include <math.h>
#define ull unsigned long long int

int decimalToBinary(int N)
{
    ull B_Number = 0;
    int cnt = 0;
    while (N != 0)
    {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        cnt++;
    }
    return B_Number;
}
void bitInvert(unsigned int n, unsigned int b, unsigned int c){
    ull a = decimalToBinary(n);
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
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter index where inverting starts : ");
    scanf("%d", &b);
    printf("Enter number of bits to invert: ");
    scanf("%d", &c);
    bitInvert(a, b, c);
}