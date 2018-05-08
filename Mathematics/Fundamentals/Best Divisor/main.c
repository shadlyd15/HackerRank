#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int get_divisor(int n, int buffer[])
{
	int count = 0;
    for (int i=1;i<=n;i++){
        if (n%i==0){
        	buffer[count] = i;
        	count++;
        }
    }
    return count;
}

int get_sum_of_digits(int number){
	int sum = 0;
	while(number){
		sum = (number % 10) + sum;
		number = number / 10;
	}
	return sum;
}

int rank_number(int number){
    int buffer[124];
    int current_best = 0;
    int best_number = 0;

    int number_of_divisor = get_divisor(number, buffer);
    for(int i = 0; i < number_of_divisor; i++){
    	int digit_sum = get_sum_of_digits(buffer[i]);
    	if(digit_sum > current_best){
    		best_number = buffer[i];
    		current_best = digit_sum;
    	}
    }

    return best_number;
}

int main(){
    int n; 
    scanf("%d",&n);
    printf("%d", rank_number(n));
    return 0;
}
