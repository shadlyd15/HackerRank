#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d", &T);
    while(T--) {
        int px, py, qx, qy;
        scanf("%d%d%d%d", &px, &py, &qx, &qy);

        int rx = 2 * qx - px;
        int ry = 2 * qy - py;
        
        printf("%d %d\n", rx, ry);
    }
    return 0;
}
