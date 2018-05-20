#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  char string[101];
  scanf("%s",string);

  char *stack=(char *)malloc(sizeof(char)*strlen(string));
  memset(stack, 0x00, sizeof(char)*strlen(string));
  int top=-1;

  for(int i=0;i<strlen(string);i++){

      if(i==0){
          stack[++top]=string[i];
      }
      else
      {
          if(stack[top]==string[i]){
              top--;
          }
          else{
              stack[++top]=string[i];
          }
      }
  }

  if(top==-1){
      printf("Empty String");
  }
  else{
      for(int i=0;i<=top;i++)
          printf("%c",stack[i]);
  }

  printf("\r\n");
  return 0;
}
