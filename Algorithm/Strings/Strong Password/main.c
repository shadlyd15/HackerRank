#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

char numbers[] = "0123456789";
char lower_case[] = "abcdefghijklmnopqrstuvwxyz";
char upper_case[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char special_characters[] = "!@#$%^&*()-+";

#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int main() {

  char string[100001];
  memset(string, 0x00, 100001);

  int length = 0; 
  scanf("%d", &length);
  scanf("%s",string);
  int strength = 0;

  bool has_length = false;
  bool has_number = false;
  bool has_lower_case = false;
  bool has_upper_case = false;
  bool has_special = false;

  for(int i = 0; i < length; i++){

    if(!has_number){
      if(strchr(numbers, string[i])){
        strength = strength + 1;
        // printf("numbers Found\r\n");
        has_number = true;
      }
    }

    if(!has_lower_case){
      if(strchr(lower_case, string[i])){
        strength = strength + 1;
        // printf("lower_case Found\r\n");
        has_lower_case = true;
      }
    }

    if(!has_upper_case){
      if(strchr(upper_case, string[i])){
        strength = strength + 1;
        // printf("upper_case Found\r\n");
        has_upper_case = true;
      }
    }

    if(!has_special){
      if(strchr(special_characters, string[i])){
        strength = strength + 1;
        // printf("special_characters Found\r\n");
        has_special = true;
      }
    }

    if(strength > 3)
      break;
  }

  int remaining = 0;

  if((length + 4 - strength) > 5){
    remaining = 4 - strength;
  }
  else{
    remaining = 6 - length;
  }

  printf("%d\r\n", remaining);
  return 0;
}