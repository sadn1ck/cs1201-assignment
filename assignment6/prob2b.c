#include <stdio.h>
int main() {
    long int ll = 1200000000;
    short int ss = -5;
    ll = ss;
    printf("%ld %d", ll, ss);
    /* both are showing -5 because -5 is well within the range of both variables
    so it doesn't rotate around to the negative values
    */
}