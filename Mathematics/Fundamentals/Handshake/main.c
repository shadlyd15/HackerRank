#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int T; 
    scanf("%d",&T);
    for(int a0 = 0; a0 < T; a0++)
    {
        int N,M; 
        scanf("%d",&N);
        M = N - 1;
        printf("%d\n", ((M*(M+1))/2));
    }
    return 0;
}

