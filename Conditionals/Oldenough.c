#include <stdio.h>

int age;

int main() {
   printf("how old are you\n");
   scanf("%d", &age);

   if(age >= 18){
       printf("You can vote unc\n");
   }else if(age >= 16){
       printf("You can drive unc\n");
   }else if (age >= 15){
       printf("you can get a learners permit unc\n");
   }else if (age >= 5){
       printf("You can go to school lil bro\n");
   }else{
       printf("sorry lil bro\n");
   }
   return 0;
}

