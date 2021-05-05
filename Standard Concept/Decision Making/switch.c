#include<stdio.h>

int main () {
    char grade = 'O';

    switch(grade) {
        case '+' :
            printf("Excellent\n");
            break;
        case 'A' :
            printf("Very Good\n");
            break;
        case 'B' :
            printf("Good\n");
            break;
        case 'b' :
            printf("Average\n");
            break;
        case 'O' :
            printf("Out Standing\n");
            break;
        default :
            printf("Unable to get your grade card\n");
    }
    printf("Your grader is:%c\n",grade);
    return 0;
}