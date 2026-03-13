#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
int binary[BITS_IN_BYTE];
int decimalValue;
int main(void)
{
    // Få streng
    string input = get_string("Message?: ");

    // Convert decimal tal til binary tal
    int length = strlen(input);
    for (int i = 0; i < length; i++)
    {
        decimalValue = input[i]; // assigner input værdiens indeks til variablen decimalValue

        for (int j = BITS_IN_BYTE - 1; j > 0; j--)
        {
            binary[j] =
                decimalValue % 2; // regnestykket konverterer decimal tal til binary tal og indsætter dem samtidigt i min array.
            decimalValue /= 2;
        }
        for (int k = 0; k < BITS_IN_BYTE; k++)
        {
            print_bulb(binary[k]); // printer emojis'ne k(8) antal gange
        }

        printf("\n"); // laver en en ny linje til efter 8 bits
    }
}

void print_bulb(int bit)
{

    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
