#include <stdio.h>
#include <stdlib.h>

int main()
{
    fork();
    fork();
    fork();
    puts("Main function");
}