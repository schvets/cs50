#include <stdio.h>
#include <stdlib.h>     // atoi (also on cs50.h)
#include <cs50.h>       // string data type
#include <string.h>     // strlen
#include <ctype.h>      // isupper, islower

char CasesarCipher(char, int);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <keyword>\n", argv[0]);
        return 1;
    }
    else
    {
        int k = atoi(argv[1]);
        // printf("Message:\n");
        string message = GetString();

        for (int i = 0; i < strlen(message); i++)
        {
            if (isalpha(message[i]))
                message[i] = CasesarCipher(message[i], k);
        }

        printf("%s\n", message);
        return 0;
    }
}


char CasesarCipher(char p, int k)
{
    if (isupper(p))b
        return (((p - 'A') + k) % 26) + 'A';
    else
        return (((p - 'a') + k) % 26) + 'a';
}
