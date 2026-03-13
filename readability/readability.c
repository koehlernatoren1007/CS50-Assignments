#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    int bogstaver = 0;
    int ord = 1;
    int sætninger = 0;

    // få user input
    string text = get_string("Text? ");

    // Tjekker hvor mange bogstaver der er.
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isupper(text[i]))
        {
            bogstaver++;
        }
        else if (islower(text[i]))
        {
            bogstaver++;
        }
    }

    // Tjekker hvor mange ord der er.
    for (int j = 0; text[j] != '\0'; j++)
    {
        if (text[j] == ' ')
        {
            ord++;
        }
    }

    // Tjekker hvor mange sætninger der er.
    for (int k = 0; k < strlen(text); k++)
    {
        if (text[k] == '!' || text[k] == '?' || text[k] == '.')
        {
            sætninger++;
        }
    }

    // Beregner Coleman-Liau indekset
    float L = bogstaver / (float) ord * 100;
    float S = sætninger / (float) ord * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;

    int roundedGrade = round(index);

    if (roundedGrade >= 16)
    {
        printf("Grade 16+\n");
    }

    else if (roundedGrade < 1)
    {
        printf("Before Grade 1\n");
    }

    else
    {
        printf("Grade %i\n", roundedGrade);
    }
}
