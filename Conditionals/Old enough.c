#include <stdio.h>

int age;

int main() {
    printf("what is your grade percent\n");
    scanf("%d", &age);

    if(age >= 18){
        printf("You can vote unc\n");
    }else if(age >= 16){
        printf("You can drive unc\n");
    }else if (age >= 15){
        printf("you can get a learners permit unc\n");
    }else if (grade >= 60){
        printf("you have a D \n");
    }else{
        printf("you have an F\n");
    }
    return 0;
}