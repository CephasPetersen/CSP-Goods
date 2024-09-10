#include <stdio.h>

int main(void) {
    char name[30];
    printf("name now: \n");
    fgets(name, sizeof(name), stdin);
    printf("hello %s", name);
    return 0;
}