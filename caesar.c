#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int onlyDigits(string s);
int isDigit(char s[]);

// Main function
int main(int argc, string argv[])
{
    if (argc != 2)
        // if there is no key or an extra input
    {
        printf("./caesar key\n");
        return 1;
    }

    int d = onlyDigits(argv[1]);
    if (d == 1)
        // if there are only digits
        // argv[1] is key number
    {
        string plain = get_string("Plaintext: ");
        printf("ciphertext: ");
        for (int i = 0; i < strlen(plain); i++)
        {
            if (plain[i] >= 65 && plain[i] <= 90)
                // if upper case letter
            {
                while (plain[i] + atoi(argv[1]) > 90)
                {
                    plain[i] = plain[i] - 26;
                }
                printf("%c", plain[i] + atoi(argv[1]));
            }
            else if (plain[i] >= 97 && plain[i] <= 122)
                // if lower case letter
            {
                while (plain[i] + atoi(argv[1]) > 122)
                {
                    plain[i] = plain[i] - 26;
                }
                printf("%c", plain[i] + atoi(argv[1]));
            }
            else
                // if not a letter
            {
                printf("%c", plain[i]);
            }
        }
        printf("\n");
    }
    else
        // if there are characters
    {
        printf("./caesar key\n");
        return 1;
    }
}

// Check that there are only digits
int onlyDigits(string s)
{
    int digit = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] * 1 > 47 && s[i] * 1 < 58)
        {
            digit = digit + 0;
        }
        else
        {
            digit--;
        }
    }
    return digit;
}
