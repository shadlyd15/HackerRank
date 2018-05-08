#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define MIN(a,b) ((a) < (b) ? a : b)
#define MAX(a,b) ((a) > (b) ? a : b)

long int solve(long int n, long int m){
    long int value = (long int)((n*m)-1);
    return value;
}

int main() {
    long int n; 
    long int m; 
    scanf("%ld %ld", &n, &m);
    long int result = solve(n, m);
    printf("%ld\n", result);
    return 0;
}
