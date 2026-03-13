#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool only_digits(string s);

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage:  ./caesar  key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage:  ./caesar  key\n");
            return 1;
        }
    }


     int k = atoi(argv[1]);


    string plainText = get_string("plaintext:  ");
    printf("Ciphertext:  ");

    int length = strlen(plainText);


    for (int j = 0; j < length; j++)
    {
        if (isupper(plainText[j]))
        {
        printf("%c", (plainText[j] - 65 + k) % 26 + 65);
        }
        else if (islower(plainText[j]))
        {
        printf("%c", (plainText[j] - 97 + k) % 26 + 97);
        }
        else if (plainText[j] == ' ')
        {
            printf(" ");

        }
        else if (plainText[j] == '!' || plainText[j] == '?')
        {
            printf("%c", plainText[j]);
        }
    }
    printf("\n");
}
