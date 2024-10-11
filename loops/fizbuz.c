#include <stdio.h>
#include <string.h>
#include <time.h>
int i, usr;
char one[50],two[50],three[50];

void delay(int sec){
   int milli = 1*sec;

   clock_t start = clock();

   while(clock()< start+milli);
}
int main(){
   printf("gimme a number: \n");
   scanf("%d", &usr);
   printf("gimme a word: \n");
   scanf("%s", one);
   printf("gimme a new word: \n");
   scanf("%s", two);
   strcat(three, one);
   strcat(three, two);
   //create a loop that counts to 50
   for(i=1;i<usr;i++){
       //change number divisible by both 5 and 3 with a the combination of both words
       if(i%3==0 && i%5==0){
           printf("%s\n", three);
       //replace numbers dicisble by 3 with word one
       }else if(i%3==0){
           printf("%s\n", one);
       //change numbers divisible by 5 with word two
       }else if (i%5==0){
           printf("%s\n", two);
        //print the other numbers
       }else{
           printf("%d\n", i);
       }
       delay(50);
   }
   return 0;
}