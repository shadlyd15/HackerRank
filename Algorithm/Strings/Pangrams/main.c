#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int get_length(char * string){
  int count = 0;
  while(*string++){
    count++;
  }
  return count;
}

bool is_pangram(char * input){
  int length = get_length(input);
  
  int buffer[255];
  memset(buffer, 0x00, 255);

  for(int i = 0; i < length; i++){
    input[i] = tolower(input[i]);
    if(isalpha(input[i])){
      buffer[input[i] - 'a'] = 1;
    }
  }

  int num_of_alpha = 0;
  for (int i = 0; i < 27; i++){
    if(buffer[i] > 0){
      num_of_alpha++;
    }
  }
  return (num_of_alpha == 26);
}

int main() {
  char input[10000];
  memset(input, 0x00, 10000);
  fgets(input, 10000, stdin);

  if(is_pangram(input)){
    printf("pangram\n");
  }
  else{
    printf("not pangram\n");
  }
  return 0;
}
