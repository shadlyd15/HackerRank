#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int T = 0;
    scanf("%d",&T);
    while(T--)
        {
        int numberOfTown = 0;
        int numberOfRoutes;
        long int totalPath = 1;
        scanf("%d",&numberOfTown);
        for(int i =0; i<(numberOfTown-1) ; i++)
            {
            scanf("%d",&numberOfRoutes);            
            totalPath = (numberOfRoutes * totalPath)%1234567;
        }        
        printf("%ld\n",totalPath );
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
