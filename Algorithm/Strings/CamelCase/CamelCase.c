#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

  char string[100001];
  scanf("%s",string);
  int count = 1;
  for(int i=0;i<strlen(string);i++){
      if(isupper(string[i])){
        // printf("\r\n");
        count++;
      }

      // printf("%c", string[i]);
  }

  printf("%d\r\n", count);
  return 0;
}
