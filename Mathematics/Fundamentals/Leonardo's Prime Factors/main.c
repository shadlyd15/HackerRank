#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int number)
{
    bool flag = true;
    
    if(number<2)
      return false;
      
    for(int i = 2 ; i<((number/2)+1) ; i++)
    {
        if((number%i == 0 ))
        {
            flag = false;
            return false;
        }
    }  
    return true;
}

int main() 
{
    int queryNumber;
    scanf("%d",&queryNumber);
   
    
    while(queryNumber--) 
    {
        long int number;
        scanf("%ld",&number);
        for(int i = 0; i < number ; i++)
        {
            int primeFactor = 0;
            int i = 0;
            while(number)
            {
                if(isPrime(i))
                {
                    number = number / i;
                    primeFactor++;
                }
               i++;
            }
            
            printf("%d\n",primeFactor-1);
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
