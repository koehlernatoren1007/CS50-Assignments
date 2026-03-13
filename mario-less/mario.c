#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // få en integer imellem 1-8 / x.
    int x;
    do
    {
        x = get_int("Brick size? ");
    }
    while (x < 1 || x > 8);

    // lav et loop der printer x++ hver gang den looper.

    for (int i = 1; i <= x; ++i)
    {
        for (int k = 0; k < x - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; ++j)
        {

            printf("#");
        }

        printf("\n");
    }
}
