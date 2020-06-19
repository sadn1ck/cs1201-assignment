#include <stdio.h>
int main() {
    long int ll = 1200000000;
    short int ss = 1;
    printf("%ld",sizeof(short int));
    printf("\n");
    ss = ll;
    printf("%hi",ss);
    /* since short has a maximum value, which is exceeded by the ll variable. what happens is that the number starts getting counted again from the negative end of its limits.
    1200000000 exceeds maximum value of short which is 32767.
    */
}