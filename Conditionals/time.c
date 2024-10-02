#include <time.h>
#include <stdio.h>

int hour;


int main() {
    time_t now;
    struct tm*now_tm;

    now = time(NULL);
    now_tm = localtime(&now);
    hour = now_tm->tm_hour;
    printf("%d\n", hour);

    if(hour <= 12){
        printf("good morning\n");
    }else if(hour <= 18){
        printf("good afternoon\n");
    }else if("hour <= 20"){
        printf("good evening\n");
    }else{
        printf("good night\n");
        }

    return 0;
}