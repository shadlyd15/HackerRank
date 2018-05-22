#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define INITIAL_OFFSET(x) (isupper(x)?'A':'a')

bool is_alpha(char ch){
	if(((ch > 64) && (ch < 91)) || (ch > 96) && (ch < 123)){
		return true;
	}
	return false;
}

int main(){
	int length = 0; 	
	scanf("%d", &length);

	char * input = (char*)malloc(length + 1);
	memset(input, 0x00, length + 1);

	scanf("%s", input);

	int offset = 0;
	scanf("%d", &offset);

	for (int i = 0; i < length; i++){
		if(is_alpha(input[i])){
			input[i] = INITIAL_OFFSET(input[i]) + (input[i] + offset - INITIAL_OFFSET(input[i])) % ('A' - 'Z' + 1);
		}
	}

	printf("%s\n", input);
	free(input);
	return 0;
}