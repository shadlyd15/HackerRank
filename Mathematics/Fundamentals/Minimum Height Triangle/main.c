#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int lowestTriangle(int base, int area){
    int min_height = (2 * area)/base;
    long calc_area = 0.5 * min_height * base;
    while(!(calc_area >= area)){
        min_height++;
        calc_area = 0.5 * (min_height) * base;
    }
    return min_height;
}

int main() {
    int base; 
    int area; 
    scanf("%d %d", &base, &area);
    int height = lowestTriangle(base, area);
    printf("%d\n", height);
    return 0;
}
