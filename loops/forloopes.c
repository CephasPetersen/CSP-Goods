#include <stdio.h>
char siblings[8][20] = {"Atticus", "Cephas", "Emmma", "Iris"};
int i;
int main (){
   for(i=0; i < 4; i++){
       printf("Wazzup %s\n", siblings[i]);
   }
   return 0;
}

