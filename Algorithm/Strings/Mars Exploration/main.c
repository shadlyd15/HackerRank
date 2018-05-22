#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int S_in_right_position(char * string){
	int length = strlen(string);
	int count = 0;
	for (int i = 0; i < length; ++i){
		if((string[i] == 'S') && ((i % 3) == 0 || (i % 3) == 2)){
			count++;
		}
	}
	return count;
}

int O_in_right_position(char * string){
	int length = strlen(string);
	int count = 0;
	for (int i = 0; i < length; i++){
		if((string[i] == 'O') && (i % 3) == 1){
			count++;
		}
	}
	return count;
}

int main(){
	char * input = (char*)malloc(128);
	memset(input, 0x00, 128);

	scanf("%s", input);

	int ans = strlen(input) - S_in_right_position(input) - O_in_right_position(input);
	printf("%d\n", ans);
	free(input);
	return 0;
}