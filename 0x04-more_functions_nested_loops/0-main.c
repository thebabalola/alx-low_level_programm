#include "main.h"
#include <stdio.h>

/* Prototype declaration for _isupper function */
int _isupper(int c);

int main(void)
{
    char c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
