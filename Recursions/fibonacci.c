#include <stdio.h>

int fibonacci(int i) {

   if(i == 0) {
      return 0;
   }
	
   if(i == 1) {
      return 1;
   }
   return fibonacci(i-1) + fibonacci(i-2);
}

int  main() {
   int j;
   int i;
   puts("\nInput the maximum iteration: ");
   scanf("%d",&i);
	
   for (j =0; j < i; j++) {
      printf("%d\t\n", fibonacci(j));
   }
	
   return 0;
}
	
