#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
    int T = 0;
    scanf("%d",&T);
    while(T--)
    {
        long int N = 0;
        long int K = 0;

        scanf("%ld",&N);
        scanf("%ld",&K);
        
        long int solve = (K >= N / 2) ? (N - 1 - K) * 2 : 2 * K + 1;
        printf("%ld\n", solve);
    }
    return 0;
}
