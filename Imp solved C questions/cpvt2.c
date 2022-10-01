#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
int isPalindrom(char *num)
{

    int i, bb = 0;

    char n[101];

    for (i = 0; i < strlen(num); i++)
    {

        if (isalpha(num[i]))
        {

            n[bb] = num[i];

            bb++;
        }
    }
    n[bb] = '\0';

    for (i = 0, bb = strlen(n) - 1; i <= bb; i++, bb--)
    {

        if (toupper(n[i]) != toupper(n[bb]))

            return 0;
    }

    for (i = 0; i < strlen(n); i++)

        num[i] = n[i];

    num[i] = '\0';

    return 1;
}

int main()
{

    int len, flag = 0;

    char n[101];

    FILE *input = fopen("input5.txt", "r");

    FILE *output = fopen("output5.txt", "w");

    while ((fscanf(input, "%s", n)) != EOF)
    {

        if (isPalindrom(n)) //we send a whole string to the function ispalindrome

            fprintf(output, "%s\n", n);
    }

    fclose(input);

    fclose(output);

    return 0;
}