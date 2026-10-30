#include <stdio.h>

int main()
{     
      int i = 10;
      int *pi = &i;
       int **ppi = &pi;
       
      printf("%d\n", i);
         *pi = 20;
      printf("%d\n", i);
         **ppi = 30;

      return 0;
}
