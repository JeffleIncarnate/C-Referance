#include <stdio.h>

int main () {
   int a = 0;
   while( a < 1000000 ) {
      printf("%d\n", a);
      a++;
   }
   return 0;
}
