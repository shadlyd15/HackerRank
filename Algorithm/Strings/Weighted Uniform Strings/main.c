#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool solve(char * input, int sum){
  bool ans = false;
  char * uniform_string = NULL;
  for(int i = 1; i < 27; ++i){
    if(!(sum%i)){
      int factor = sum / i;
      uniform_string = (char *)malloc(factor + 1);
      memset(uniform_string, 0x00, factor + 1);
      for (int j = 0; j < i; j++){
        uniform_string[j] = factor + 'a' - 1;
      }
      if(strstr(input, uniform_string)){
        ans = true;
      }
      else{
        ans = false;
      }
    }
  }

  if(uniform_string)
    free(uniform_string);
  return ans;
}

int main(int argc, char const *argv[])
{
  char input[100000];
  scanf("%s", input);
  int T = 0;
  scanf("%d", &T);
  bool db[10*1000*1000];
  int length = strlen(input);

  for(int idx = 0; idx < length; idx++){
    db[idx] = solve(input, idx);
  }
  // return false;

  while(T--){
    int sum = 0;
    scanf("%d", &sum);
    if(db[sum]){
      printf("Yes\n");
    } 
    else{
      printf("No\n");
    }
  }
  return 0;
}