#include <stdio.h>

int main(int argc, char* argv[])
{
    //printf("%i^2 = %i\n", 50000, 50000*50000);

    printf("(%lf + (%lf +%lf)) = %lf", 1e20,-1e20, 3.14, 1e20 + (-1e20 + 3.14));

    return 0;
}
