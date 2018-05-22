#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int factorial(int number){
  if(number == 1){
    return 1;
  }
  else{
    return number * factorial(number - 1);
  }
}

int delete_char(char * string, char * buffer, char ch){
  int length = strlen(string);
  memset(buffer, 0x00, length);

  int top = -1;
  for (int i = 0; i < length; ++i){
    if(string[i] != ch){
        buffer[++top] = string[i];
    }
  }
  return top;
}

int find_unique_chars(char * string, char * buffer){
  int length = strlen(string);
  memset(buffer, 0x00, length);

  int count = 0;
  int top = 0;

  bool insert = true;

  for (int i = 0; i < length; i++){
    for(int j = 0; j <= top; j++){
      if(buffer[j] == string[i]){
        insert = false;
        break;
      }
    }
    if(insert){
      buffer[top++] = string[i];
      insert = true;
    }
  }
  return top;
}

char get_minimum_occurence(char * input){
  char buffer[128][128];

}

bool if_alternating(char * string){
  char first = string[0];
  char second = string[1];
  int length = strlen(string);

  int first_count = 0;
  for(int i = 0; i < length; i += 2){
    if(first == string[i]){
      first_count++;
    }
  }

  int second_count = 0;
  for(int i = 1; i < length; i += 2){
    if(second == string[i]){
      second_count++;
    }
  }

  return ((first_count + second_count) == length);
}

int solve(char * input){
  char buffer[128];

  int length = strlen(input);
  if(length < 2){
    return 0;
  }

  for (int i = 0; i < length; ++i){
    memset(buffer, 0x00, 128);
    if(delete_char(input, buffer, input[i])){
        printf("%s\n", buffer);
      if(if_alternating(buffer)){
        return strlen(buffer);
      }
    }
  }
  return solve(buffer);
}

int main() {

  char input[128];
  char buffer[128];
  memset(input, 0x00, 128);
  memset(buffer, 0x00, 128);

  scanf("%s", input);
  // int new_length = delete_char(input, buffer, 'y');
  // printf("%s\n", buffer);

  // printf("Solve : %d\n", solve(input));

  int chars = find_unique_chars(input, buffer);
  printf("Number of Unique Chars : %d\r\n", chars);

  // if(if_alternating("babcabab")){
  //   printf("ALternating\n");
  // }
  // else{
  //   printf("Not Alternating\n");
  // }
  return 0;
}
