#include <stdio.h>

/**
 * print_name - a function that prints a name.
 * @name: name of the person.
 */
void print_name(char *name, void (*f)(char *))
{
    printf("%s\n", name);
}

int main(void)
{
    char name[] = "Ayoyinka";
    print_name(name, NULL);

    return 0;
}
