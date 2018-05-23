#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool find_subsequence(char * input, char * desired_string){

  int desired_length = strlen(desired_string);
  int index_buffer[32];
  for (int i = 0; i < desired_length; ++i){
    int address = (int)strchr(input, desired_string[i]);
    if(address){
      index_buffer[desired_string[i]] = address - (int)input;
      printf("Found %c @ index %d\n", desired_string[i], index_buffer[desired_string[i]]);
    }
  }

  int count = 0;
  for (int i = 0; i < desired_length; i++){
    if(index_buffer[desired_string[i]] < index_buffer[desired_string[i + 1]]){
      count++;
    }
  }

  printf("Count : %d\n", count);
  printf("Desired  : %d\n", desired_length);

  if(count == desired_length){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
}

int main() {
  find_subsequence("hereiamstackerrank", "hackerrank");
  return 0;
}
