#include<stdio.h>
#include<math.h>

int main(){
    float a,b,x,y;
    printf("Enter First Number: \nReal Part = ");
    scanf("%f",&a);
    printf("Imaginary Part = ");
    scanf("%f",&b);
    printf("Enter Second Number: \nReal Part = ");
    scanf("%f",&x);
    printf("Imaginary Part = ");
    scanf("%f",&y);
    int n;
    printf("Operation:\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division \n");
    scanf("%d",&n);
    if(n==1) printf("%f + i%f", a+x, b+y);
    else if(n==2) printf("%f + i%f", a-x, b-y);
    else if(n==3) printf("%f + i%f", a*x - b*y, a*y + b*x);
    else if(n==4) printf("%f + i%f", (a*x + b*y)/( x*x + y*y ), (b*x - a*y)/( x*x + y*y ));
    printf("\n");
    return 0;
}
