// idk weird problem lol
#include <stdio.h>
int main() {
   void *ptr;
   printf("The size of pointer value : %ld bytes\n", sizeof(ptr));
   printf("The register size : %ld bits", sizeof(ptr)*8);
   return 0;
}