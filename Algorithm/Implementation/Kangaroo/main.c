#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void kangaroo(int x1, int v1, int x2, int v2) {
    if((x1 < x2) && (v2 < v1) && (!((x2 - x1) % (v2 - v1)))){
        printf("YES");
    }
    else if((x2 < x1) && (v1 < v2) && (!((x1 - x2) % (v1 - v2)))){
            printf("YES");
    }
    else if((x1 == x2) && (v1 == v2)){
        printf("YES");
    }
    else{
        printf("NO");
    }
}

int main() {
    int x1; 
    int v1; 
    int x2; 
    int v2; 

    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);
    int result_size;
    kangaroo(x1, v1, x2, v2);
    return 0;
}
