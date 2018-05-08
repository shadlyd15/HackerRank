#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T = 0;
    scanf("%d",&T);
    while(T--)
        {
        long int l,b;
        scanf("%ld %ld", &l,&b);
        long int area = l*b;
        long int areaLeft = 0;
        for(long int i = sqrt(area); i > 0  ; i--)
            {
            if((area%(i*i)==0)&&(l%i==0)&&(b%i==0))
                {
                printf("%ld\n",(area/(i*i)));
                break;
            }
        }
    }   
    return 0;
}
