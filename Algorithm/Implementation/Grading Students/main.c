#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gradingStudents(int grade) {
    /*
     * Write your code here.
     */
    int rounded_grade = grade;
    if(grade > 37){
        if((grade % 5) > 2){
               rounded_grade = grade + (5 - grade % 5);
        }
    }
    return rounded_grade;

}

int main()
{
    int n = 0;
    scanf("%d",&n);
    while(n--){
        int grade = 0;
        scanf("%d", &grade);
        printf("%d\n", gradingStudents(grade));
    }
}


