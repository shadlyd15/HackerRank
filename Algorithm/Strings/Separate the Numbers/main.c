#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>



int main(int argc, char const *argv[])
{
  char * input;
  scanf("%s", input);
  int length = strlen(input);
  char * pEnd;
  long int num = strtol (input, &pEnd, 10);
  printf("%d\n", num);
  if(length & 1){

  }
  return 0;
}