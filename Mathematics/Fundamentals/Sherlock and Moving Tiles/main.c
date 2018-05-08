#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double L,S1,S2,Q;
    scanf("%lf %lf %lf",&L,&S1,&S2);
    scanf("%lf",&Q);
    
    while(Q--)
    {
        double qi = 0;
        scanf("%lf",&qi);
        
        double time = fabs((sqrt(2)*(sqrt(qi)-L))/(S1-S2));
        printf("%0.20lf\n",time);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
