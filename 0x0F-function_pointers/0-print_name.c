#include <stdio.h>

void print_name(char *name, void (*f)(char *)) {
    f(name);
}

void print_to_console(char *name) {
    printf("Name: %s\n", name);
}

int main() {
    char name[] = "John Doe";
    print_name(name, print_to_console);
    return 0;
}
