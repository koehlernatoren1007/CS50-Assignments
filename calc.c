#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_int("X? ");
    long y = get_int("Y? ");

    float z = (float) x / (float) y;
    printf("%f\n", z);
}
