#include <stdio.h>

void hello(const char *name) {
    printf("hello %s\n", name);
}

int main() {
    hello("Roberto");
    hello("Cephas");
    hello("louie");
    hello("tony");
    hello("tim");
    return 0;
}