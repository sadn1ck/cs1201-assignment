// shift an integer right or left by b bits, take input n,b and d (d=0 for R, d=1 for L)
#include <stdio.h>
int shiftLR(int d, int n, int b){
    if(d==1){
        return n<<b;
    }
    else{
        return n>>b;
    }
}
int main(){
    int inp;
    printf("Enter number to shift: ");
    scanf("%d", &inp);
    int b;
    printf("Enter bits to shift: ");
    scanf("%d", &b);
    int d;
    printf("Enter direction to shift (0 for R, 1 for L): ");
    scanf("%d", &d);
    int op = shiftLR(d, inp, b);
    printf("%d", op);
}
