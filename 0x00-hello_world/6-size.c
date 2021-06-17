#include <stdio.h>

int main(void){
  char a = "a";
  int b = 2;
  long int c = 3;
  long long int d = 2;
  float e = 2.5;

  printf("size of char: %s \n",sizeof(a));
 puts("size of int:  %d\n",sizeof(b));
 printf("size of long int: %li\n",sizeof(c));
 printf("size of long long int: %lli\n",sizeof(d));
 puts("size of float: %f\n",sizeof(e));

 return (0); 
}
