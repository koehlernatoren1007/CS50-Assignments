#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{


    string names[] = {"Dennis", "Jens", "Lars"};
    string numre[] = {"60532950", "31507241", "45324211"};

    int arrayStørrelse = sizeof(names) / sizeof(names[0]);

    string name = get_string("Navn? \n");

    for (int i = 0; i < arrayStørrelse; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("%s\n ", numre[i]);
            return 0;
        }
    }
    printf("Nummer eller navn er ikke til stede.\n");
    return 1;

}
